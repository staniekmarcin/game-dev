


#include "SPowerupActor.h"

ASPowerupActor::ASPowerupActor()
{
	PrimaryActorTick.bCanEverTick = true;

	PowerupInterval = 0.0f;

	TotalNrOfTicks = 0;
}

void ASPowerupActor::BeginPlay()
{
	Super::BeginPlay();

	
}

void ASPowerupActor::OnTickPowerup()
{
	TicksProccessed++;

	OnPowerupTicked();
	
	if (TicksProccessed >= TotalNrOfTicks)
	{
		OnExpired();

		GetWorldTimerManager().ClearTimer(TimerHandle_PowerupTick);
	}
}

void ASPowerupActor::ActivatePowerup()
{
	OnActivated();
	
	if (PowerupInterval > 0.0f)
	{
		GetWorldTimerManager().SetTimer(TimerHandle_PowerupTick, this, &ASPowerupActor::OnTickPowerup, PowerupInterval, true);
	}
	else
	{
		OnTickPowerup();
	}
}


