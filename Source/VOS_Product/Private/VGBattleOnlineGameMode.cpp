#include "VGBattleOnlineGameMode.h"

AVGBattleOnlineGameMode::AVGBattleOnlineGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AVGBattleOnlineGameMode::StaticClass();
    this->k_br_respawn_interval = 5.00f;
}

