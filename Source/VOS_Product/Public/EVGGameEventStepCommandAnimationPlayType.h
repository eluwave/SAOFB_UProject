#pragma once
#include "CoreMinimal.h"
#include "EVGGameEventStepCommandAnimationPlayType.generated.h"

UENUM(BlueprintType)
enum class EVGGameEventStepCommandAnimationPlayType : uint8 {
    PlayAtStart,
    PlayAtEnd,
};

