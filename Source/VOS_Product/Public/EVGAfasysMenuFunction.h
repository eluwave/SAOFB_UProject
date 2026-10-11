#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysMenuFunction.generated.h"

UENUM(BlueprintType)
namespace EVGAfasysMenuFunction {
    enum Type {
        AutoShoping,
        PocketMoney,
        DepositManagement,
        DepositsAndWithdrawals,
        AI,
        Coordinate,
        EmotionCustomize,
        EmotionDetailCustomize,
        OriginalSkillCreate,
        Num,
    };
}

