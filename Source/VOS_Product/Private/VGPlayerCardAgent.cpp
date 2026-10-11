#include "VGPlayerCardAgent.h"

AVGPlayerCardAgent::AVGPlayerCardAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_player_card_edit_widget_ref = NULL;
    this->m_player_card_list_widget_ref = NULL;
    this->m_player_card_preview_widget_ref = NULL;
    this->m_motion_wait_time = 0.00f;
    this->m_player_card_edit_widget = NULL;
    this->m_player_card_list_widget = NULL;
    this->m_player_card_preview_widget = NULL;
    this->m_dialog = NULL;
    this->m_connecting_dialog = NULL;
    this->m_online_startup = NULL;
}

void AVGPlayerCardAgent::Start(EVGPlayerCardMode::Type mode) {
}

