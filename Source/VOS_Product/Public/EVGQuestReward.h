#pragma once
#include "CoreMinimal.h"
#include "EVGQuestReward.generated.h"

UENUM(BlueprintType)
namespace EVGQuestReward {
    enum Type {
        Invalid,
        Cash,
        Exp,
        SP,
        Item,
        Flag,
        Medal,
        Unique,
        WeaponMastery,
        ENUM_MAX UMETA(Hidden),
    };
}

