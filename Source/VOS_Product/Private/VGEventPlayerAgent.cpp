#include "VGEventPlayerAgent.h"

AVGEventPlayerAgent::AVGEventPlayerAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_event_player_widget_class = NULL;
    this->m_event_player_widget = NULL;
    this->m_subscene = NULL;
}

void AVGEventPlayerAgent::StartEventSelect(EVGCharaUnique chara_id, FName event_id) {
}

void AVGEventPlayerAgent::Start() {
}

