#pragma once
#include "CoreMinimal.h"
#include "EVGNetworkResultScoreType.generated.h"

UENUM(BlueprintType)
enum class EVGNetworkResultScoreType : uint8 {
    Damage,
    Down,
    Token,
    Rezurrection,
    Healing,
    Kill,
};

