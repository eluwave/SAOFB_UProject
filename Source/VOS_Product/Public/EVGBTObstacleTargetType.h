#pragma once
#include "CoreMinimal.h"
#include "EVGBTObstacleTargetType.generated.h"

UENUM(BlueprintType)
enum class EVGBTObstacleTargetType : uint8 {
    None,
    Target,
    TeamNearest,
    EnemyNearest,
    NUM,
};

