#pragma once
#include "CoreMinimal.h"
#include "EVGInputKeyOption.generated.h"

UENUM(BlueprintType)
namespace EVGInputKeyOption {
    enum Type {
        None,
        Skill,
        ENUM_MAX UMETA(Hidden),
    };
}

