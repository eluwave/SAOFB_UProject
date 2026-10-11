#pragma once
#include "CoreMinimal.h"
#include "EVGMeshVisualCustomizeMeshType.generated.h"

UENUM(BlueprintType)
enum class EVGMeshVisualCustomizeMeshType : uint8 {
    Hair,
    Face,
    Body,
    Accessory,
    Weapon,
    Num,
    Unknown,
};

