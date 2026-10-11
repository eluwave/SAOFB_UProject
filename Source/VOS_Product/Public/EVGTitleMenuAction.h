#pragma once
#include "CoreMinimal.h"
#include "EVGTitleMenuAction.generated.h"

UENUM(BlueprintType)
namespace EVGTitleMenuAction {
    enum Type {
        None,
        NextPage,
        PrevPage,
        Command,
        ENUM_MAX UMETA(Hidden),
    };
}

