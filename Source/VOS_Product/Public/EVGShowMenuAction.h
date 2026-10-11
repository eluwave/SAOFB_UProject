#pragma once
#include "CoreMinimal.h"
#include "EVGShowMenuAction.generated.h"

UENUM(BlueprintType)
namespace EVGShowMenuAction {
    enum Type {
        None,
        NextPage,
        PrevPage,
        Command,
        ENUM_MAX UMETA(Hidden),
    };
}

