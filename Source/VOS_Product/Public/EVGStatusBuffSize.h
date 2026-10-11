#pragma once
#include "CoreMinimal.h"
#include "EVGStatusBuffSize.generated.h"

UENUM(BlueprintType)
enum class EVGStatusBuffSize : uint8 {
    None,
    S,
    M,
    L,
};

