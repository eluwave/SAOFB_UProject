#pragma once
#include "CoreMinimal.h"
#include "EVGLocalStartupErrorType.generated.h"

UENUM(BlueprintType)
enum class EVGLocalStartupErrorType : uint8 {
    None,
    RequiredPatchAvailable,
    RequiredSystemUpdate,
    AgeRestrictionFailure,
    UserNotFound,
    UserNotLoggedIn,
    GenericFailure,
    GuestLoggedIn,
};

