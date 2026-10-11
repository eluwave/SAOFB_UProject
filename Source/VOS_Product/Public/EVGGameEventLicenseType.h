#pragma once
#include "CoreMinimal.h"
#include "EVGGameEventLicenseType.generated.h"

UENUM(BlueprintType)
enum class EVGGameEventLicenseType : uint8 {
    Full,
    Trial,
    Any,
};

