#pragma once
#include "CoreMinimal.h"
#include "EVPOnlineIdentityMessageType.generated.h"

UENUM(BlueprintType)
enum class EVPOnlineIdentityMessageType : uint8 {
    ChatRestricted,
    UgcRestricted,
    Num,
    None,
};

