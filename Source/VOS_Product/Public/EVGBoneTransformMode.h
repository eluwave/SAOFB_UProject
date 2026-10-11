#pragma once
#include "CoreMinimal.h"
#include "EVGBoneTransformMode.generated.h"

UENUM(BlueprintType)
enum class EVGBoneTransformMode : uint8 {
    Ignore,
    Replace,
    Additive,
};

