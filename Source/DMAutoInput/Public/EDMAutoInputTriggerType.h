#pragma once
#include "CoreMinimal.h"
#include "EDMAutoInputTriggerType.generated.h"

UENUM(BlueprintType)
enum class EDMAutoInputTriggerType : uint8 {
    Right,
    Left,
    Num,
};

