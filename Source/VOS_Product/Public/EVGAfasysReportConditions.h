#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysReportConditions.generated.h"

UENUM(BlueprintType)
namespace EVGAfasysReportConditions {
    enum Type {
        PlayerMoney,
        AfasysMoney,
        AfasysTotalMoney,
        BankMoney,
        ProgressFlagOn,
        ProgressFlagOff,
        ENUM_MAX UMETA(Hidden),
    };
}

