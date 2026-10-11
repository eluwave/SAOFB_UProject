#include "VGBattleDefenceGameState.h"

AVGBattleDefenceGameState::AVGBattleDefenceGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_is_auto_fade_disabled = true;
}

bool AVGBattleDefenceGameState::IsStarted() const {
    return false;
}

