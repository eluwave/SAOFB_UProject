#include "VGScreenEffectSupervisor.h"

UVGScreenEffectSupervisor::UVGScreenEffectSupervisor() {
    this->m_screen_fade_widget = NULL;
    this->m_temp_black_screen_widget = NULL;
    this->m_save_icon_widget = NULL;
    this->m_chara_edge_mid = NULL;
    this->m_post_process_volume = NULL;
}

void UVGScreenEffectSupervisor::ShowTemporaryBlackScreen(int32 ZOrder) {
}

void UVGScreenEffectSupervisor::HideTemporaryBlackScreen() {
}

