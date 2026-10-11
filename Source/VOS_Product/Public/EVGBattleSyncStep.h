#pragma once
#include "CoreMinimal.h"
#include "EVGBattleSyncStep.generated.h"

UENUM(BlueprintType)
enum class EVGBattleSyncStep : uint8 {
    None,
    CharacterReady,
    VersusReward,
    SaveDone,
    ResultReady,
    ResultFinish,
};

