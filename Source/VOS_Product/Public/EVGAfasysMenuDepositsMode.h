#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysMenuDepositsMode.generated.h"

UENUM(BlueprintType)
namespace EVGAfasysMenuDepositsMode {
    enum Type {
        Deposits,
        Withdrawals,
        Num,
    };
}

