#include "VGSoundPlayerAgent.h"

AVGSoundPlayerAgent::AVGSoundPlayerAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_widget_class = NULL;
    this->m_sound_player_bgm_list = NULL;
    this->m_sound_player_voice_list = NULL;
    this->m_list_widget = NULL;
    this->m_cue_sheet = NULL;
}

void AVGSoundPlayerAgent::Start() {
}

