#pragma once
#include "CoreMinimal.h"
#include "EVGLoadingTipsWidgetTypeId.generated.h"

UENUM(BlueprintType)
enum class EVGLoadingTipsWidgetTypeId : uint8 {
    ImageAndText,
    TextOnly,
    Num,
};

