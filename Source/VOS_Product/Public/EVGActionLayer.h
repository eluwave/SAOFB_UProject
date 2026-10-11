#pragma once
#include "CoreMinimal.h"
#include "EVGActionLayer.generated.h"

UENUM(BlueprintType)
namespace EVGActionLayer {
    enum Type {
        Base,
        Sub,
        Additive,
        AdditiveSub,
        Num,
    };
}

