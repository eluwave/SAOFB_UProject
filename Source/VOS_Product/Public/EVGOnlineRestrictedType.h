#pragma once
#include "CoreMinimal.h"
#include "EVGOnlineRestrictedType.generated.h"

UENUM(BlueprintType)
enum class EVGOnlineRestrictedType : uint8 {
    Chat = 1,
    Ugc,
    BadPlayerName = 4,
    BadAfasysName = 8,
    Penalty = 16,
};

