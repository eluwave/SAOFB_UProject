#pragma once
#include "CoreMinimal.h"
#include "EVGTeamRule.generated.h"

UENUM(BlueprintType)
enum class EVGTeamRule : uint8 {
    EXPLORER,
    EXTERMINATION,
    BOB,
    INDIVIDUAL,
    NUM,
};

