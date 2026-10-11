#include "VGVoicePlayerAgent.h"

AVGVoicePlayerAgent::AVGVoicePlayerAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_widget_class = NULL;
    this->m_sound_player_class = NULL;
    this->m_list_widget = NULL;
    this->m_sound_player_agent = NULL;
    this->m_subscene = NULL;
    this->m_cue_sheet = NULL;
}

void AVGVoicePlayerAgent::Start() {
}

