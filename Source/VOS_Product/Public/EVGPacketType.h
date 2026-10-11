#pragma once
#include "CoreMinimal.h"
#include "EVGPacketType.generated.h"

UENUM(BlueprintType)
enum class EVGPacketType : uint8 {
    None,
    SkillBulletRemove,
    SkillAreaSpawn,
    SkillBeaconHit,
    GadgetKnifeRemove,
    GadgetInstallation,
    UltimateSniperRemove,
    UltimateLauncherRemove,
    UltimateLauncherSecondFire,
    UltimateLauncherAreaSpawn,
};

