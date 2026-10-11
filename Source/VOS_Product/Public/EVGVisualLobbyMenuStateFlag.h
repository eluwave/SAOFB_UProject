#pragma once
#include "CoreMinimal.h"
#include "EVGVisualLobbyMenuStateFlag.generated.h"

UENUM(BlueprintType)
enum EVGVisualLobbyMenuStateFlag {
    quest = 1,
    Countdown,
    Ready = 4,
    SyncWait = 8,
};

