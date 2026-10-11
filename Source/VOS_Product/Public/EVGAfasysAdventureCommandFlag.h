#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysAdventureCommandFlag.generated.h"

UENUM(BlueprintType)
namespace EVGAfasysAdventureCommandFlag {
    enum Type {
        DecideDisable,
        NewIconVisible,
        Num,
    };
}

