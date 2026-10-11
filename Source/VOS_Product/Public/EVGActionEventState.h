#pragma once
#include "CoreMinimal.h"
#include "EVGActionEventState.generated.h"

UENUM(BlueprintType)
namespace EVGActionEventState {
    enum Type {
        Air,
        Hovering,
        IgnoreGravity,
        IgnoreHit,
        IgnoreDamageReaction,
        Invisible,
        InvisibleWeapon,
        InvisibleWeaponLeft,
        InvisibleHUD,
        VisibleWireGun,
        ExcludeSystemAssist,
        Interruptible,
        UnInterruptibleSub,
        FootL,
        FootR,
        Invincible,
        Chance,
        Tumble,
        AirUnControllable,
        ENUM_MAX UMETA(Hidden),
        None = 254,
    };
}

