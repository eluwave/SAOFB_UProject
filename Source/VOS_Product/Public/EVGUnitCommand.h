#pragma once
#include "CoreMinimal.h"
#include "EVGUnitCommand.generated.h"

UENUM(BlueprintType)
enum class EVGUnitCommand : uint8 {
    STANDBY,
    MOVE,
    ATTACK,
    GUARD,
    RESCUE,
    RECOVERY,
    BUFF,
    DEFENCE,
    EVACUATION,
    CONQUEST,
    SCOUT,
    NUM,
    NONE = 254,
};

