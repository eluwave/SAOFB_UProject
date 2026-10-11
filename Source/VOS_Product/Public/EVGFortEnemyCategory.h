#pragma once
#include "CoreMinimal.h"
#include "EVGFortEnemyCategory.generated.h"

UENUM(BlueprintType)
enum class EVGFortEnemyCategory : uint8 {
    Attacker,
    Healer,
    Cannon,
    Boss,
    NUM,
};

