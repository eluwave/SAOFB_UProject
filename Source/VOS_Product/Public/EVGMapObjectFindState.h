#pragma once
#include "CoreMinimal.h"
#include "EVGMapObjectFindState.generated.h"

UENUM(BlueprintType)
enum class EVGMapObjectFindState : uint8 {
    Unknown,
    NotFound,
    Found,
    Num,
};

