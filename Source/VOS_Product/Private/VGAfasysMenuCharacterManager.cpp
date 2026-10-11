#include "VGAfasysMenuCharacterManager.h"

AVGAfasysMenuCharacterManager::AVGAfasysMenuCharacterManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_character_class = NULL;
    this->m_character = NULL;
    this->m_voice = NULL;
    this->m_lip_data_pack = NULL;
    this->m_afasys_action_library = NULL;
}

