#pragma once
#include "CoreMinimal.h"
#include "EVGCoopQuestModeType.generated.h"

UENUM(BlueprintType)
enum class EVGCoopQuestModeType : uint8 {
    Normal,
    Extra,
    ENUM_MAX UMETA(Hidden),
};

