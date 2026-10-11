#pragma once
#include "CoreMinimal.h"
#include "EVGAnimSlot.generated.h"

UENUM(BlueprintType)
namespace EVGAnimSlot {
    enum Type {
        Base,
        LayeredBlend,
        AddBlend,
        AddBlendSub,
        Num,
    };
}

