#pragma once
#include "CoreMinimal.h"
#include "EVGSkillUnique.generated.h"

UENUM(BlueprintType)
enum class EVGSkillUnique : uint8 {
    None,
    GadgetBuff,
    GadgetProjectile,
    GadgetInstallation,
    GadgetKnife,
    GadgetCamouflage,
    Parry,
    SingleStatusBuff,
    AreaStatusBuff,
    SingleBullet,
    MultistageBullet,
    Num,
};

