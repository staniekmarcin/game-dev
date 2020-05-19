

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "Components/Button.h"
#include "PaintingPicker.h"

#include "ActionBar.generated.h"

/**
 * 
 */
UCLASS()
class VR_LIGHTPAINTER_API UActionBar : public UUserWidget
{
	GENERATED_BODY()

public:
	bool Initialize() override;

	void SetParentPicker(APaintingPicker* NewParentPicker);

protected:
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta = (BindWidget))
	UButton* AddButton;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta = (BindWidget))
	UButton* DeleteButton;

private:
	UFUNCTION()
	void AddButtonClicked()
	{
		//UE_LOG(LogTemp, Warning, TEXT("CLICKED ADD"));
		if (ParentPicker) ParentPicker->AddPainting();
	}

	UFUNCTION()
	void DeleteButtonClicked()
	{
		//UE_LOG(LogTemp, Warning, TEXT("CLICKED DELETE"));
		if (ParentPicker) ParentPicker->ToggleDeleteMode();
	}

	UPROPERTY()
	APaintingPicker* ParentPicker;
};
