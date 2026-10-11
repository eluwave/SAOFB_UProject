#pragma once
#include "CoreMinimal.h"
#include "EVGSkillListType.generated.h"

UENUM(BlueprintType)
enum class EVGSkillListType : uint8 {
    All,
    AllWeapon,
    HandGun,
    ShotGun,
    SubMachineGun,
    AssaultRifle,
    SniperRifle,
    HeavyFirearms,
    Launcher,
    Sword,
    GunAndSword,
    Gadget,
    Num,
};

