#pragma once
#include "CoreMinimal.h"
#include "EVGVisualLobbyNetMode.generated.h"

UENUM(BlueprintType)
enum class EVGVisualLobbyNetMode : uint8 {
    Host,
    Client,
    Num,
};

