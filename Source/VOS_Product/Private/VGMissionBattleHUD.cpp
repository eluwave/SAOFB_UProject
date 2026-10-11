#include "VGMissionBattleHUD.h"

AVGMissionBattleHUD::AVGMissionBattleHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->m_rule_hud_widget = NULL;
}

void AVGMissionBattleHUD::SetTimerWithWarning(float Timer, float max_timer) {
}

void AVGMissionBattleHUD::SetTimer(float Timer) {
}

void AVGMissionBattleHUD::SetRespawnMax(int32 Max) {
}

void AVGMissionBattleHUD::SetRespawnCount(int32 Count) {
}

