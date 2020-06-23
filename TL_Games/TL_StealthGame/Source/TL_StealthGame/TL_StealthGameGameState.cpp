


#include "TL_StealthGameGameState.h"

#include "TL_StealthGamePlayerController.h"

void ATL_StealthGameGameState::MulticastOnMissionCompleted_Implementation(APawn* InstigatorPawn, bool bMissionSuccess)
{

    for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; It++)
    {
        ATL_StealthGamePlayerController* PC = Cast<ATL_StealthGamePlayerController>(It->Get());
        if (PC && PC->IsLocalController())
        {
            PC->OnMissionCompleted(InstigatorPawn, bMissionSuccess);

            APawn* MyPawn = PC->GetPawn();
            if (MyPawn)
            {
                MyPawn->DisableInput(PC);
            }
        }
    }
    
}
