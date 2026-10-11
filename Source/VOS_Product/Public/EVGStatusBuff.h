#pragma once
#include "CoreMinimal.h"
#include "EVGStatusBuff.generated.h"

UENUM(BlueprintType)
enum class EVGStatusBuff : uint8 {
    Attack,
    Defense,
    Speed,
    Status,
    HealthMax,
    HealthRecover,
    HealthRecoverByGadget,
    HealthRecoverByKneeling,
    CriticalProbability,
    AilmentResist,
    AilmentResistByGadget,
    HateRise,
    HateFall,
    Armor,
    Melee,
    Gadget,
    AimAccuracy,
    AimAccuracyRate,
    BulletLineDelay,
    PhantomBullet,
    Sneaking,
    Searching,
    HyperSense,
    Invincible,
    Reload,
    SkillReusableTime,
    SkillBanned,
    RespawnInvincible,
    Num,
    None,
};

