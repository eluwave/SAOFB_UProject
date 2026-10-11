#pragma once
#include "CoreMinimal.h"
#include "EVGSaveDataResult.generated.h"

UENUM(BlueprintType)
enum class EVGSaveDataResult : uint8 {
    Succeeded,
    Corrupted,
    InvalidVersion,
    DoesNotExist,
    UnknownError,
};

