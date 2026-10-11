#include "VGGameViewportClient.h"
#include "VGScreenEffectSupervisor.h"

UVGGameViewportClient::UVGGameViewportClient() {
    this->m_screen_effect_supervisor = CreateDefaultSubobject<UVGScreenEffectSupervisor>(TEXT("ScreenEffect"));
    this->m_game_event_prompt_widget = NULL;
    this->m_debug_command = NULL;
    this->m_temp_dialog = NULL;
}

void UVGGameViewportClient::SetTemporaryDialogHandle(UVGDialog* Instance) {
}

UVGDialog* UVGGameViewportClient::GetTemporaryDialogHandle() const {
    return NULL;
}

void UVGGameViewportClient::EnableInput() {
}

void UVGGameViewportClient::DisableInput() {
}

