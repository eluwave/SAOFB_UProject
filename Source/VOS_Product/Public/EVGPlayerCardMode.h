#pragma once
#include "CoreMinimal.h"
#include "EVGPlayerCardMode.generated.h"

UENUM(BlueprintType)
namespace EVGPlayerCardMode {
    enum Type {
        CardConfirmation,
        CardEdit,
        CardList,
    };
}

