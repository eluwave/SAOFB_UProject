#pragma once
#include "CoreMinimal.h"
#include "EVGShopItem.generated.h"

UENUM(BlueprintType)
namespace EVGShopItem {
    enum Type {
        Item,
        Cash,
        Medal,
        Exp,
        SP,
        ProgressFlag,
        Information,
        Skill,
        DLCItem,
        AdmissionRestriction,
        ENUM_MAX UMETA(Hidden),
    };
}

