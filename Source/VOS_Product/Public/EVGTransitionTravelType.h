#pragma once
#include "CoreMinimal.h"
#include "EVGTransitionTravelType.generated.h"

UENUM(BlueprintType)
enum class EVGTransitionTravelType : uint8 {
    Standalone,
    ListenServer,
    Multiplay,
    Client,
    Disconnect,
    ConnectionLoss,
};

