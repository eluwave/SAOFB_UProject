#pragma once
#include "CoreMinimal.h"
#include "EVGShowThanksMenuAction.generated.h"

UENUM(BlueprintType)
namespace EVGShowThanksMenuAction {
    enum Type {
        None,
        NextPage,
        PrevPage,
        Command,
        ENUM_MAX UMETA(Hidden),
    };
}

