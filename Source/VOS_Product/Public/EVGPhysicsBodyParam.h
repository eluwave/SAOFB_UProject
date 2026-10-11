#pragma once
#include "CoreMinimal.h"
#include "EVGPhysicsBodyParam.generated.h"

UENUM(BlueprintType)
enum class EVGPhysicsBodyParam : uint8 {
    InertiaTensorScaleX,
    InertiaTensorScaleY,
    InertiaTensorScaleZ,
    CenterOfMassOffsetX,
    CenterOfMassOffsetY,
    CenterOfMassOffsetZ,
};

