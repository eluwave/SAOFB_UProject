#pragma once
#include "CoreMinimal.h"
#include "EVGCustomizeRole.generated.h"

UENUM(BlueprintType)
namespace EVGCustomizeRole {
    enum Type {
        None,
        Preset,
        Shape,
        Parts,
        Visual,
        Color,
        PartsCollection,
        ColorCollection,
        TextureCollection,
        Voices,
        Decals,
        Flag,
        TestRole,
        ENUM_MAX UMETA(Hidden),
    };
}

