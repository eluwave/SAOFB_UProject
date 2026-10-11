#pragma once
#include "CoreMinimal.h"
#include "EVPOnlineSessionError.generated.h"

UENUM(BlueprintType)
enum class EVPOnlineSessionError : uint8 {
    ServiceConnectionLost,
    ConnectionLost,
    ConnectionTimeout,
    KickForHost,
    DestroySession,
    LeaveToHost,
    OwnLeave,
    AntiCheat,
    Other,
    Num,
    None,
};

