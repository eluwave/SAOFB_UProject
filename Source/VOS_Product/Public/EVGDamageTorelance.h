#pragma once
#include "CoreMinimal.h"
#include "EVGDamageTorelance.generated.h"

UENUM(BlueprintType)
enum class EVGDamageTorelance : uint8 {
    Physics,
    Optics,
    Blast,
    Melee,
    Num,
};

