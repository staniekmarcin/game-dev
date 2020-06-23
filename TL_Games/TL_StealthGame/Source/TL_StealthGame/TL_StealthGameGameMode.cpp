// Copyright Epic Games, Inc. All Rights Reserved.

#include "TL_StealthGameGameMode.h"
#include "TL_StealthGameHUD.h"
#include "TL_StealthGameCharacter.h"
#include "TL_StealthGameGameState.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"

ATL_StealthGameGameMode::ATL_StealthGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATL_StealthGameHUD::StaticClass();

	GameStateClass = ATL_StealthGameGameState::StaticClass();
}

void ATL_StealthGameGameMode::CompleteMission(APawn* InstagatorPawn, bool bMissionSuccess)
{
	if (InstagatorPawn)
	{
		UE_LOG(LogTemp, Log, TEXT("Input Disabled"));
		

		if (SpectatingViewpointClass)
		{
			TArray<AActor*> ReturnedActors;
			UGameplayStatics::GetAllActorsOfClass(this, SpectatingViewpointClass, ReturnedActors);
			if (ReturnedActors.Num() > 0)
			{
				AActor* NewViewTarget = ReturnedActors[0];

				for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; It++)
				{
					APlayerController* PC = It->Get();
					if (PC)
					{
						PC->SetViewTargetWithBlend(NewViewTarget, 0.5f, EViewTargetBlendFunction::VTBlend_Cubic);

					}
				}
				
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("There is no actor to set new viewport"))
		}
	}

	ATL_StealthGameGameState* GS = GetGameState<ATL_StealthGameGameState>();
	if (GS)
	{
		GS->MulticastOnMissionCompleted(InstagatorPawn, bMissionSuccess);
	}
	OnMissionCompleted(InstagatorPawn, bMissionSuccess);
	
}
