// Fill out your copyright notice in the Description page of Project Settings.

#include "VRCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/PlayerController.h"
#include "TimerManager.h"
#include "Components/CapsuleComponent.h"
#include "NavigationSystem.h"

// Sets default values
AVRCharacter::AVRCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VRRoot = CreateDefaultSubobject<USceneComponent>(TEXT("VRRoot"));
	VRRoot->SetupAttachment(GetRootComponent());

	VRCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	VRCamera->SetupAttachment(VRRoot);

	DestinationMarker = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DestinationMarker"));
	DestinationMarker->SetupAttachment(GetRootComponent());

}

// Called when the game starts or when spawned
void AVRCharacter::BeginPlay()
{
	Super::BeginPlay();

	DestinationMarker->SetVisibility(false);
	DestinationMarker->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

// Called every frame
void AVRCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewCameraOffset = VRCamera->GetComponentLocation() - GetActorLocation();
	NewCameraOffset.Z = 0;
	AddActorWorldOffset(NewCameraOffset);
	VRRoot->AddWorldOffset(-NewCameraOffset);

	UpdateDestinationMarker();
}

bool AVRCharacter::FindTeleportDestination(FVector& OutLocation)
{

	FVector StartHit = VRCamera->GetComponentLocation();
	FVector EndHit = StartHit + VRCamera->GetForwardVector() * MaxTeleportDistance;
	FHitResult DestinationHit;

	UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
	if (!NavSystem) { UE_LOG(LogTemp, Warning, TEXT("No NavSystem")); return false; }
	FNavLocation NavLocation;

	bool bValidHit = GetWorld()->LineTraceSingleByChannel(DestinationHit, StartHit, EndHit, ECC_Visibility);
	bool bValidNavProjection = NavSystem->ProjectPointToNavigation(DestinationHit.Location, NavLocation, TeleportProjectionExtent);

	OutLocation = NavLocation.Location;

	return bValidNavProjection && bValidHit;
}

void AVRCharacter::UpdateDestinationMarker()
{
	FVector DestinationLocation;
	bool bHasDestination = FindTeleportDestination(DestinationLocation);

	if (bHasDestination)
	{
		DestinationMarker->SetWorldLocation(DestinationLocation);
		if (!DestinationMarker->IsVisible())
		{
			DestinationMarker->SetVisibility(true);
		}
		return;
	}
	DestinationMarker->SetVisibility(false);
}

// Called to bind functionality to input
void AVRCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("Forward"), this, &AVRCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("Right"), this, &AVRCharacter::MoveRight);
	PlayerInputComponent->BindAction(TEXT("Teleport"), IE_Released, this, &AVRCharacter::BeginTeleport);

}

void AVRCharacter::MoveForward(float Throttle)
{
	AddMovementInput(Throttle * VRCamera->GetForwardVector());
}

void AVRCharacter::MoveRight(float Throttle)
{
	AddMovementInput(Throttle * VRCamera->GetRightVector());
}

void AVRCharacter::BeginTeleport()
{
	StartFade(0, 1);
	FTimerHandle TimerHandle;
	GetWorldTimerManager().SetTimer(TimerHandle, this, &AVRCharacter::FinishTeleport, TeleportFadeTime);
}

void AVRCharacter::FinishTeleport()
{

	FVector TeleportDestination = DestinationMarker->GetComponentLocation();
	TeleportDestination.Z = TeleportDestination.Z + GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	SetActorLocation(TeleportDestination);

	StartFade(1, 0);
}
void AVRCharacter::StartFade(float FromAlpha, float ToAlpha)
{
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if (PlayerController != nullptr)
	{
		PlayerController->PlayerCameraManager->StartCameraFade(FromAlpha, ToAlpha, TeleportFadeTime, FLinearColor::Black);
	}
}


