#pragma once
#include "CoreMinimal.h"
#include "EVPOnlineMessageSanitizerError.generated.h"

UENUM(BlueprintType)
enum class EVPOnlineMessageSanitizerError : uint8 {
    DetectWord,
    Other,
    Num,
    None,
};

