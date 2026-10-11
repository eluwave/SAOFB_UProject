#pragma once
#include "CoreMinimal.h"
#include "EVGTeamCategory.generated.h"

UENUM(BlueprintType)
enum class EVGTeamCategory : uint8 {
    PLAYER,
    PLAYER_VS_PLAYER,
    ENEMY,
    ENEMY_NON_ACTIVE,
    ENEMY_VS_PLAYER,
    ENEMY_VS_OTHER,
    ENEMY_VS_ALL,
    FRIEND = 8,
    FRIEND_VS_OTHER,
    FRIEND_VS_ALL,
    TARGET = 14,
    NUM = 16,
};

