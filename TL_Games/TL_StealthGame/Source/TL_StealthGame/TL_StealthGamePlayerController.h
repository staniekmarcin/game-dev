

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TL_StealthGamePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TL_STEALTHGAME_API ATL_StealthGamePlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintImplementableEvent, Category="PlayerController")
	void OnMissionCompleted(APawn* InstigatorPawn, bool bMissionSuccess);
};
