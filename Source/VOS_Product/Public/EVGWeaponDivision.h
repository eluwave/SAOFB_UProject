#pragma once
#include "CoreMinimal.h"
#include "EVGWeaponDivision.generated.h"

UENUM(BlueprintType)
enum class EVGWeaponDivision : uint8 {
    HandGun,
    ShotGun,
    SubMachineGun,
    AssaultRifle,
    SniperRifle,
    HeavyFirearms,
    Launcher,
    Sword,
    BulletAndSword,
    Num,
    None,
};

