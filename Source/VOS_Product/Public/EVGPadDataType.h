#pragma once
#include "CoreMinimal.h"
#include "EVGPadDataType.generated.h"

UENUM(BlueprintType)
namespace EVGPadDataType {
    enum Type {
        Character,
        FocusedUI,
        Num,
    };
}

