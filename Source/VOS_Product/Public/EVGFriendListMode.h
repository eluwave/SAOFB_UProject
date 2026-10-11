#pragma once
#include "CoreMinimal.h"
#include "EVGFriendListMode.generated.h"

UENUM(BlueprintType)
enum class EVGFriendListMode : uint8 {
    MainMenu,
    Event,
    Coop,
    Num,
    None,
};

