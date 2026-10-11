#include "VGBattleHUD.h"

AVGBattleHUD::AVGBattleHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->m_battle_hud_widget = NULL;
    this->m_party_command_widget = NULL;
}

UVGBattleHUDWidget* AVGBattleHUD::GetBattleHUDWidget() const {
    return NULL;
}

void AVGBattleHUD::AddLog(const FText& LogLine) {
}

