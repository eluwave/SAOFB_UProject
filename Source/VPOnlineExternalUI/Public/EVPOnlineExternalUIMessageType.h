#pragma once
#include "CoreMinimal.h"
#include "EVPOnlineExternalUIMessageType.generated.h"

UENUM(BlueprintType)
enum class EVPOnlineExternalUIMessageType : uint8 {
    ChatRestricted,
    UgcRestricted,
    Num,
    None,
};

