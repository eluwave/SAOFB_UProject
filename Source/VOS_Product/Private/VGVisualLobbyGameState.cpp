#include "VGVisualLobbyGameState.h"

AVGVisualLobbyGameState::AVGVisualLobbyGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_quest_agent_class = NULL;
    this->m_quest_agent = NULL;
    this->m_impersonator_setting = NULL;
}

