#pragma once
#include "CoreMinimal.h"
#include "EVGMeshVisualCustomizeCategory.generated.h"

UENUM(BlueprintType)
enum class EVGMeshVisualCustomizeCategory : uint8 {
    HairBase,
    HairMesh,
    Eyebrow,
    LeftEye,
    RightEye,
    Lip,
    Makeup,
    Clothes,
    Skin,
    Accessory,
    Weapon,
    Num,
    Unknown,
};

