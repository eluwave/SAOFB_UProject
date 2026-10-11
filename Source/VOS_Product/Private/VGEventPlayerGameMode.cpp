#include "VGEventPlayerGameMode.h"

AVGEventPlayerGameMode::AVGEventPlayerGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_subscene_agent_class = NULL;
    this->m_event_player_agent_class = NULL;
    this->m_event_player_agent = NULL;
    this->m_subscene_agent = NULL;
}

