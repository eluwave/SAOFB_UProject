#pragma once
#include "CoreMinimal.h"
#include "EVGHudSummonState.generated.h"

UENUM(BlueprintType)
enum class EVGHudSummonState : uint8 {
    Impossible,
    ImpossibleLoop,
    AlreadySummon,
    AlreadySummonLoop,
    Rank1,
    Rank1Loop,
    Rank2,
    Rank2Loop,
    Rank3,
    Rank3Loop,
    None,
};

