#pragma once
#include "CoreMinimal.h"
#include "EVGBTValueType.generated.h"

UENUM(BlueprintType)
enum class EVGBTValueType : uint8 {
    Direct,
    BlackBoard,
    Num,
};

