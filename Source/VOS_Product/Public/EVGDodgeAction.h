#pragma once
#include "CoreMinimal.h"
#include "EVGDodgeAction.generated.h"

UENUM(BlueprintType)
enum class EVGDodgeAction : uint8 {
    Rolling,
    Step,
    Jump,
    None = 255,
};

