#pragma once
#include "CoreMinimal.h"
#include "EVGGameEventLaunchType.generated.h"

UENUM(BlueprintType)
enum class EVGGameEventLaunchType : uint8 {
    Automatic,
    OnContact,
    OnInteract,
    None,
    Num,
};

