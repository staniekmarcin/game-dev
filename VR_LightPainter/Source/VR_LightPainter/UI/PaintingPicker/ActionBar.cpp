


#include "ActionBar.h"

bool UActionBar::Initialize()
{
	if (!Super::Initialize()) return false;
	
	if (!AddButton) return false;
	AddButton->OnClicked.AddDynamic(this, &UActionBar::AddButtonClicked);

	if (!DeleteButton) return false;
	DeleteButton->OnClicked.AddDynamic(this, &UActionBar::DeleteButtonClicked);
	
	return true;
}

void UActionBar::SetParentPicker(APaintingPicker* NewParentPicker)
{
	ParentPicker = NewParentPicker;
}
