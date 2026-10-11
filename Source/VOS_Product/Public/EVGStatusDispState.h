#pragma once
#include "CoreMinimal.h"
#include "EVGStatusDispState.generated.h"

UENUM(BlueprintType)
enum class EVGStatusDispState : uint8 {
    Status,
    Skill,
    Num,
    None,
};

