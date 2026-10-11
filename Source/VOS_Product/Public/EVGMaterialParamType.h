#pragma once
#include "CoreMinimal.h"
#include "EVGMaterialParamType.generated.h"

UENUM(BlueprintType)
enum class EVGMaterialParamType : uint8 {
    Scalar,
    Color,
    Num,
};

