
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ShooterCharacter.generated.h"

UCLASS()
class SIMPLESHOOTER_API AShooterCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AShooterCharacter();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void MoveForward(float AxisValue);	
	void MoveRight(float AxisValue);
	//void LookUp(float AxisValue);

	void LookUpRate(float AxisValue);
	void LookRightRate(float AxisValue);
	
	UPROPERTY(EditAnywhere)
	float RotationRate = 10;
};
