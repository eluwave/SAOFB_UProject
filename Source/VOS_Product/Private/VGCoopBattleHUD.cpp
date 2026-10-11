#include "VGCoopBattleHUD.h"

AVGCoopBattleHUD::AVGCoopBattleHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->m_coop_hud_widget = NULL;
}

void AVGCoopBattleHUD::SetTimerWithWarning(float Timer, float max_timer) {
}

void AVGCoopBattleHUD::SetTimer(float Timer) {
}

void AVGCoopBattleHUD::SetRespawnMax(int32 Max) {
}

void AVGCoopBattleHUD::SetRespawnCount(int32 Count) {
}

