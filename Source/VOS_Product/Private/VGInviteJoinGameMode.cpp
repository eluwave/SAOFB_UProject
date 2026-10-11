#include "VGInviteJoinGameMode.h"

AVGInviteJoinGameMode::AVGInviteJoinGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_connecting_dialog = NULL;
    this->m_error_dialog = NULL;
    this->m_online_startup = NULL;
}

