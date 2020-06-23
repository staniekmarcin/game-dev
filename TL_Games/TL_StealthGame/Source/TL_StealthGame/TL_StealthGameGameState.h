

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "TL_StealthGameGameState.generated.h"

/**
 * 
 */
UCLASS()
class TL_STEALTHGAME_API ATL_StealthGameGameState : public AGameStateBase
{
	GENERATED_BODY()

	public:

	UFUNCTION(NetMulticast, Reliable)
	void MulticastOnMissionCompleted(APawn* InstigatorPawn, bool bMissionSuccess);
};
