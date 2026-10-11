#pragma once
#include "CoreMinimal.h"
#include "EVGShowTitleMenuAction.generated.h"

UENUM(BlueprintType)
namespace EVGShowTitleMenuAction {
    enum Type {
        None,
        NextPage,
        PrevPage,
        Command,
        ENUM_MAX UMETA(Hidden),
    };
}

