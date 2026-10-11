#pragma once
#include "CoreMinimal.h"
#include "EVGCoopLobbyPlayerType.generated.h"

UENUM(BlueprintType)
enum class EVGCoopLobbyPlayerType : uint8 {
    Player,
    Npc,
    Affasys,
    ENUM_MAX UMETA(Hidden),
};

