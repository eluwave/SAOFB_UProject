#pragma once
#include "CoreMinimal.h"
#include "EVGBTTInputType.generated.h"

UENUM(BlueprintType)
enum class EVGBTTInputType : uint8 {
    Press,
    Release,
    Num,
};

