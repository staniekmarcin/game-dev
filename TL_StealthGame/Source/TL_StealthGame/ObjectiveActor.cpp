

#include "ObjectiveActor.h"

AObjectiveActor::AObjectiveActor()
{
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;
	
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetupAttachment(MeshComp);
}

void AObjectiveActor::BeginPlay()
{
	Super::BeginPlay();

	
}

void AObjectiveActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

