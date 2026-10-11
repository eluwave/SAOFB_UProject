#pragma once
#include "CoreMinimal.h"
#include "EVGAISkillFlagBit.generated.h"

UENUM(BlueprintType)
enum class EVGAISkillFlagBit : uint8 {
    NeedShot,
    NotForBoss,
    Approach,
    InAir,
    InRange,
    Grenade,
    Untargeted,
    Knife,
    NotForFlying,
    StopMoving,
    Gadget,
    Cover,
    KneelingShot,
    InputLever,
    NoInputLever,
};

