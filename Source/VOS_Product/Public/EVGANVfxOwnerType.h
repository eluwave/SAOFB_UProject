#pragma once
#include "CoreMinimal.h"
#include "EVGANVfxOwnerType.generated.h"

UENUM(BlueprintType)
enum class EVGANVfxOwnerType : uint8 {
    Actor,
    Weapon,
    WireGun,
    Camera,
    Num,
};

