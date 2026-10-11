#pragma once
#include "CoreMinimal.h"
#include "EVGFootSoundMode.generated.h"

UENUM(BlueprintType)
enum class EVGFootSoundMode : uint8 {
    Player,
    Friend,
    Enemy,
    Player_BoB,
    Friend_BoB,
    Enemy_BoB,
};

