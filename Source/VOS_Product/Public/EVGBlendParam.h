#pragma once
#include "CoreMinimal.h"
#include "EVGBlendParam.generated.h"

UENUM(BlueprintType)
namespace EVGBlendParam {
    enum Type {
        None,
        AimYaw,
        AimPitch,
        AimWalkLR,
        AimWalkFB,
        WalkToRun,
        BackToBackJog,
        Num,
    };
}

