#pragma once
#include "CoreMinimal.h"
#include "EVPOnlineRankType.generated.h"

UENUM(BlueprintType)
enum class EVPOnlineRankType : uint8 {
    Rookie,
    E,
    D,
    C,
    B,
    A,
    AA,
    AAA,
    S,
    SS,
    SSS,
    Num,
    None,
};

