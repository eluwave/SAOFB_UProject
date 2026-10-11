#pragma once
#include "CoreMinimal.h"
#include "EVGSoundType.generated.h"

UENUM(BlueprintType)
namespace EVGSoundType {
    enum Type {
        CMN_SYSTEM_SE,
        CMN_BATTLE_SE,
        STAGE_SE,
        COMPONENT_SE,
        COMPONENT_VOICE,
        WEAPON_SE,
        LEFT_WEAPON_SE,
        ENUM_MAX UMETA(Hidden),
        NONE,
    };
}

