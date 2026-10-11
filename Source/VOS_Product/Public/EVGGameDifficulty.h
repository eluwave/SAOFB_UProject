#pragma once
#include "CoreMinimal.h"
#include "EVGGameDifficulty.generated.h"

UENUM(BlueprintType)
enum class EVGGameDifficulty : uint8 {
    Easy,
    Normal,
    Hard,
    Num,
};

