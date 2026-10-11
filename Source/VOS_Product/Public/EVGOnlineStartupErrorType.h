#pragma once
#include "CoreMinimal.h"
#include "EVGOnlineStartupErrorType.generated.h"

UENUM(BlueprintType)
enum class EVGOnlineStartupErrorType : uint8 {
    None,
    AccountTypeFailure,
    UserNotFound,
    UserNotLoggedIn,
    GenericFailure,
    OnlinePlayRestricted,
    RequiredPatchAvailable,
    RequiredSystemUpdate,
    AgeRestrictionFailure,
};

