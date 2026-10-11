#pragma once
#include "CoreMinimal.h"
#include "EVGRoamCharacterProc.generated.h"

UENUM(BlueprintType)
enum class EVGRoamCharacterProc : uint8 {
    INVALID,
    None,
    Load,
    Walk,
    Wait,
    Goal,
    Talk,
};

