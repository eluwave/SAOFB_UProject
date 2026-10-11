#pragma once
#include "CoreMinimal.h"
#include "EVGInformationItemDropModifier.generated.h"

UENUM(BlueprintType)
namespace EVGInformationItemDropModifier {
    enum Type {
        None,
        LegndaryAccessoryDropTime,
        AllSlotLockAndAttackSpecializedTime,
        SpecialEffectNormalizedTime,
        ENUM_MAX UMETA(Hidden),
    };
}

