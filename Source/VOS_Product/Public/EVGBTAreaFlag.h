#pragma once
#include "CoreMinimal.h"
#include "EVGBTAreaFlag.generated.h"

UENUM(BlueprintType)
enum class EVGBTAreaFlag : uint8 {
    Jump,
    Crouch,
    Obstacle,
};

