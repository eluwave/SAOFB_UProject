#pragma once
#include "CoreMinimal.h"
#include "EVGSkillOffsetWeapon.generated.h"

UENUM(BlueprintType)
enum class EVGSkillOffsetWeapon : uint8 {
    All,
    Unarmed,
    HandGun_WG2,
    ShotGun_WG1,
    SubMachineGun_WG1,
    SubMachineGun_WG2,
    AssaultRifle_WG1,
    SniperRifle_WG1,
    HeavyFirearms_WG4,
    Launcher_WG1,
    Launcher_WG3,
    Sword_WS1,
    BulletAndSword_WW1,
    TwoHand_WG5,
};

