#include "VGMatchingManager.h"

AVGMatchingManager::AVGMatchingManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_lobby_creation_widget = NULL;
    this->m_lobby_edit_search_comment_widget = NULL;
    this->m_lobby_search_widget = NULL;
    this->m_lobby_mode_selection_widget = NULL;
    this->m_coop_lobby_list_widget = NULL;
    this->m_connecting_dialog = NULL;
    this->m_message_dialog = NULL;
    this->m_online_startup = NULL;
    this->m_ngword_check_component = NULL;
}

