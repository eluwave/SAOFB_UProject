#pragma once
#include "CoreMinimal.h"
#include "EVGWireTargetType.generated.h"

UENUM(BlueprintType)
enum class EVGWireTargetType : uint8 {
    None,
    Field,
    Enemy,
    EnemyRepel,
    EnemyItem,
    Friend,
    Other,
    Repel,
    Switch,
    Invalid,
};

