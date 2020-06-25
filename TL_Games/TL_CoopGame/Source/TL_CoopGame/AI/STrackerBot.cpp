


#include "STrackerBot.h"


#include "DrawDebugHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "NavigationSystem.h"
#include "SCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "NavigationSystem/Public/NavigationPath.h"

ASTrackerBot::ASTrackerBot()
{
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetCanEverAffectNavigation(false);
	MeshComp->SetSimulatePhysics(true);
	RootComponent = MeshComp;

	HealthComp = CreateDefaultSubobject<USHealthComponent>(TEXT("Health"));
	HealthComp->OnHealthChanged.AddDynamic(this, &ASTrackerBot::HandleTakeDamage);

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetSphereRadius(200);
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	SphereComp->SetupAttachment(RootComponent);
	
	
	bUseVelocityChange = false;
	bStartedSelfDestruction = false;
	MovementForce = 1000;
	RequiredDistanceToTarget = 100;

	ExplosionDamage = 40;
	ExplosionRadius = 200;
}

void ASTrackerBot::BeginPlay()
{
	Super::BeginPlay();

	// Find Initial Move To
	NexTPathPoint = GetNextPathPoint();

	
}

void ASTrackerBot::HandleTakeDamage(USHealthComponent* OwningHealthComp, float Health, float HealthDelta,
	const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	UE_LOG(LogTemp, Warning, TEXT("Health %s: %s"), *GetName(), *FString::SanitizeFloat(Health));

	if (MatInst == nullptr)
	{
		MatInst = MeshComp->CreateAndSetMaterialInstanceDynamicFromMaterial(0, MeshComp->GetMaterial(0));		
		
	}

	if (MatInst)
	{
		MatInst->SetScalarParameterValue("LastTimeDamageTaken", GetWorld()->TimeSeconds);
	}

	if (Health <= 0.0f)
	{
		SelfDestruct();
	}
}

FVector ASTrackerBot::GetNextPathPoint()
{
	ACharacter* PlayerPawn = UGameplayStatics::GetPlayerCharacter(this, 0);
	
	UNavigationPath* NavPath = UNavigationSystemV1::FindPathToActorSynchronously(this, GetActorLocation(), PlayerPawn);

	if (NavPath->PathPoints.Num() > 1)
	{
		return NavPath->PathPoints[1];
	}

	return GetActorLocation();
}

void ASTrackerBot::SelfDestruct()
{
	if (bExploded)
	{
		return;
	}

	bExploded = true;
	
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation());

	TArray<AActor*> IgnoredActors;
	IgnoredActors.Add(this);
	
	UGameplayStatics::ApplyRadialDamage(this,
		ExplosionDamage,
		GetActorLocation(),
		ExplosionRadius,
		nullptr,
		IgnoredActors,
		this,
		GetInstigatorController(),
		true);

	DrawDebugSphere(GetWorld(),
		GetActorLocation(),
		ExplosionRadius,
		12,
		FColor::Red,
		false,
		2.0f,
		0,
		1.0f);
	
	Destroy();
}

void ASTrackerBot::DamageSelf()
{
	UGameplayStatics::ApplyDamage(this, 20, GetInstigatorController(), this, nullptr);
}

void ASTrackerBot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float DistanceToTarget = (GetActorLocation() - NexTPathPoint).Size(); 
	if (DistanceToTarget <= RequiredDistanceToTarget)
	{
		NexTPathPoint = GetNextPathPoint();

		//DrawDebugString(GetWorld(), GetActorLocation(), "Target Reached");

	}
	else
	{
		// keep moving towards next target
		FVector ForceDirection = NexTPathPoint - GetActorLocation();
		ForceDirection.Normalize();

		ForceDirection *= MovementForce;
		
		MeshComp->AddForce(ForceDirection, NAME_None, bUseVelocityChange);

		DrawDebugDirectionalArrow(GetWorld(), GetActorLocation(), GetActorLocation() + ForceDirection, 32, FColor::Yellow, false, 0.0f, 1.0f);
	}

	DrawDebugSphere(GetWorld(), NexTPathPoint, 20, 12, FColor::Yellow, false, 0.0f, 1.0f);
}

void ASTrackerBot::NotifyActorBeginOverlap(AActor* OtherActor)
{
	if (!bStartedSelfDestruction)
	{
		ASCharacter* PlayerPawn = Cast<ASCharacter>(OtherActor);
		if (PlayerPawn)
		{
			// Start self destruction sequence
			GetWorldTimerManager().SetTimer(TimerHandle_SelfDamage, this, &ASTrackerBot::DamageSelf, 0.5f, true, 0.0f);

			bStartedSelfDestruction = true;
		}
	}

}

