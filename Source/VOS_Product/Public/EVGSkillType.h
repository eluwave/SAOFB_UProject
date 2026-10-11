#pragma once
#include "CoreMinimal.h"
#include "EVGSkillType.generated.h"

UENUM(BlueprintType)
enum class EVGSkillType : uint8 {
    HandGun,
    ShotGun,
    SubMachineGun,
    AssaultRifle,
    SniperRifle,
    HeavyFirearms,
    Launcher,
    Sword,
    BulletAndSword,
    Gadget,
    Num,
    None,
};

