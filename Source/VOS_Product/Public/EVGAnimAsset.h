#pragma once
#include "CoreMinimal.h"
#include "EVGAnimAsset.generated.h"

UENUM(BlueprintType)
namespace EVGAnimAsset {
    enum Type {
        Invalid,
        Sequence_0,
        Sequence_1,
        BlendSpace_0,
        BlendSpace_1,
        Montage,
        Num,
    };
}

