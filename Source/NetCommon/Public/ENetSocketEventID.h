#pragma once
#include "CoreMinimal.h"
#include "ENetSocketEventID.generated.h"

UENUM(BlueprintType)
enum class ENetSocketEventID : uint8 {
    Connected,
    Disconnected,
    Receive,
};

