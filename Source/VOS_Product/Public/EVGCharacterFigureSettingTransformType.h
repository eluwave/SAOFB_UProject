#pragma once
#include "CoreMinimal.h"
#include "EVGCharacterFigureSettingTransformType.generated.h"

UENUM(BlueprintType)
enum class EVGCharacterFigureSettingTransformType : uint8 {
    Translation,
    Rotation,
    Scale,
};

