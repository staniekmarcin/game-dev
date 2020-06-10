

#pragma once

#include "CoreMinimal.h"
#include "SWeapon.h"
#include "SProjectileWeapon.generated.h"

/**
 * 
 */
UCLASS()
class TL_COOPGAME_API ASProjectileWeapon : public ASWeapon
{
	GENERATED_BODY()

protected:
    virtual void Fire() override;

    UPROPERTY(EditDefaultsOnly, Category="Projectile Weapon")
    TSubclassOf<AActor> ProjectileClass;
};
