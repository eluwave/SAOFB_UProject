#include "VGStruggleMatchingManager.h"

AVGStruggleMatchingManager::AVGStruggleMatchingManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->k_is_hero_struggle_released = true;
    this->m_lobby_versus_selection_widget = NULL;
    this->m_lobby_quick_match_widget = NULL;
}

void AVGStruggleMatchingManager::Start() {
}

