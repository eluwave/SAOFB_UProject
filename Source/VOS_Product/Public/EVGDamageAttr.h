#pragma once
#include "CoreMinimal.h"
#include "EVGDamageAttr.generated.h"

UENUM(BlueprintType)
enum class EVGDamageAttr : uint8 {
    Range,
    Melee,
    Skill,
    Physics,
    Optics,
    Blast,
    Critical,
    Parriable,
    Penetrate,
    ForceReaction,
    ArmorBreakable,
    Wire,
    HideDamageValue,
    HideHitEffect,
    NoBlockingStatic,
    ReduceNPCDamage,
    SelfCauser,
    Num,
};

