#pragma once
#include "CoreMinimal.h"
#include "EVGBTTargetTeam.generated.h"

UENUM(BlueprintType)
enum class EVGBTTargetTeam : uint8 {
    Enemy = 1,
    TeamMate,
    Friend = 4,
    TeamMateAndFriend = 6,
    All,
};

