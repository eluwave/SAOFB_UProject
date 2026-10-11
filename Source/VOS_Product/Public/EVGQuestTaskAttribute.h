#pragma once
#include "CoreMinimal.h"
#include "EVGQuestTaskAttribute.generated.h"

UENUM(BlueprintType)
namespace EVGQuestTaskAttribute {
    enum Type {
        Hidden,
        Masked,
        HideSingleCount,
        ResetOnRewinded,
        ENUM_MAX UMETA(Hidden),
    };
}

