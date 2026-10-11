#include "VGTitleGameMode.h"

AVGTitleGameMode::AVGTitleGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_subscene_agent = NULL;
    this->m_subscene_agent_class = NULL;
    this->m_online_startup = NULL;
    this->m_local_startup = NULL;
    this->m_default_save_data = NULL;
    this->m_dialog = NULL;
    this->m_local_dialog = NULL;
    this->m_dlc_dialog = NULL;
    this->m_state_actor = NULL;
}

