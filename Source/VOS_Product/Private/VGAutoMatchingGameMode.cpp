#include "VGAutoMatchingGameMode.h"

AVGAutoMatchingGameMode::AVGAutoMatchingGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_connecting_dialog = NULL;
    this->m_message_dialog = NULL;
    this->m_online_startup = NULL;
}

