#pragma once
#include "CoreMinimal.h"
#include "EVGQuestRestrict.generated.h"

UENUM(BlueprintType)
namespace EVGQuestRestrict {
    enum Type {
        WeaponCategory,
        Weapon,
        Buddy,
        BuddyCount,
        Skill,
        ENUM_MAX UMETA(Hidden),
    };
}

