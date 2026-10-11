#pragma once
#include "CoreMinimal.h"
#include "EVGTeamPathFindingGroup.generated.h"

UENUM(BlueprintType)
enum class EVGTeamPathFindingGroup : uint8 {
    Always,
    Auto,
    A2,
    B2,
    NUM,
};

