#pragma once
#include "CoreMinimal.h"
#include "EVGIKState.generated.h"

UENUM(BlueprintType)
namespace EVGIKState {
    enum Type {
        Off,
        On,
        None,
        None_Delayed,
    };
}

