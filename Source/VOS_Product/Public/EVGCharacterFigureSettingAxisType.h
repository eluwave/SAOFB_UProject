#pragma once
#include "CoreMinimal.h"
#include "EVGCharacterFigureSettingAxisType.generated.h"

UENUM(BlueprintType)
enum class EVGCharacterFigureSettingAxisType : uint8 {
    X,
    Y,
    Z,
    XY,
    XZ,
    YZ,
    XYZ,
};

