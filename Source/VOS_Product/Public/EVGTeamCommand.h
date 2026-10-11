#pragma once
#include "CoreMinimal.h"
#include "EVGTeamCommand.generated.h"

UENUM(BlueprintType)
enum class EVGTeamCommand : uint8 {
    FOLLOW,
    MEETING,
    RECOVERY,
    CROSSFIRE,
    EVACUATION,
    DEFENCE,
    SUPPORT,
    NOATTACK,
    READY,
    CONQUEST,
    HATE,
    NUM,
};

