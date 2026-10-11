#pragma once
#include "CoreMinimal.h"
#include "EVGCoopVisualLobbyHudState.generated.h"

UENUM(BlueprintType)
enum class EVGCoopVisualLobbyHudState : uint8 {
    None,
    MenuClose,
    MenuOpen,
    MenuOpen_NotClosable,
    Lobby2D,
    Ready,
    ENUM_MAX UMETA(Hidden),
};

