#pragma once
#include "CoreMinimal.h"
#include "EVGBTDifficultyType.generated.h"

UENUM(BlueprintType)
enum class EVGBTDifficultyType : uint8 {
    GameDifficulty,
    AIDifficulty,
    AIDifficulty2,
    Num,
};

