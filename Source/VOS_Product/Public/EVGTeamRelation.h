#pragma once
#include "CoreMinimal.h"
#include "EVGTeamRelation.generated.h"

UENUM(BlueprintType)
enum class EVGTeamRelation : uint8 {
    NONE,
    ENEMY,
    FRIEND,
    NEUTRAL,
    TARGET,
    EQUAL,
};

