#pragma once
#include "CoreMinimal.h"
#include "EVPOnlineJoinSessionError.generated.h"

UENUM(BlueprintType)
enum class EVPOnlineJoinSessionError : uint8 {
    None,
    Full,
    NotExist,
    Close,
    ServerBanned,
    Other,
    Num,
};

