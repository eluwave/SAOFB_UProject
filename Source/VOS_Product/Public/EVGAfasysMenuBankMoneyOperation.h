#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysMenuBankMoneyOperation.generated.h"

UENUM(BlueprintType)
namespace EVGAfasysMenuBankMoneyOperation {
    enum Type {
        Solid,
        Normal,
        Gambling,
        Num,
    };
}

