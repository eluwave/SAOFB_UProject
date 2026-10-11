#pragma once
#include "CoreMinimal.h"
#include "EVGGridViewAction.generated.h"

UENUM(BlueprintType)
enum class EVGGridViewAction : uint8 {
    Normal,
    Toggle,
    Edit,
};

