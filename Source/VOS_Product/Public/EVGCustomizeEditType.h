#pragma once
#include "CoreMinimal.h"
#include "EVGCustomizeEditType.generated.h"

UENUM(BlueprintType)
namespace EVGCustomizeEditType {
    enum Type {
        None,
        Slider,
        Collections,
        Colors,
        Toggle,
        SpinSelection,
        CollectionsType2,
        ENUM_MAX UMETA(Hidden),
    };
}

