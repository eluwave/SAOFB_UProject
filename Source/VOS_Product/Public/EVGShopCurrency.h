#pragma once
#include "CoreMinimal.h"
#include "EVGShopCurrency.generated.h"

UENUM(BlueprintType)
namespace EVGShopCurrency {
    enum Type {
        Credit,
        AttackMedal,
        SupportMedal,
        WeaponMedal,
        ENUM_MAX UMETA(Hidden),
    };
}

