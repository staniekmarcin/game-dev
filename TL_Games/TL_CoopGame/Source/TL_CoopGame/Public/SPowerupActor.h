

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SPowerupActor.generated.h"

UCLASS()
class TL_COOPGAME_API ASPowerupActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ASPowerupActor();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category="Powerups")
	float PowerupInterval;
	
	UPROPERTY(EditDefaultsOnly, Category="Powerups")
	int32 TotalNrOfTicks;


    int32 TicksProccessed;

	FTimerHandle TimerHandle_PowerupTick;

	UFUNCTION()
	void OnTickPowerup();

	
public:
	void ActivatePowerup();
	
	UFUNCTION(BlueprintImplementableEvent, Category="Powerups")
	void OnActivated();
	
	UFUNCTION(BlueprintImplementableEvent, Category="Powerups")
	void OnPowerupTicked();

	UFUNCTION(BlueprintImplementableEvent, Category="Powerups")
	void OnExpired();
};
