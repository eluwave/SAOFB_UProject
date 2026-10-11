#include "VGTDMBattleHUD.h"

AVGTDMBattleHUD::AVGTDMBattleHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->m_tdm_hud_widget = NULL;
}

void AVGTDMBattleHUD::SetTimerWithWarning(float Timer, float max_timer) {
}

void AVGTDMBattleHUD::SetTimer(float Timer) {
}

void AVGTDMBattleHUD::SetTeamDamage(EVGCharaTeam Type, float Damage) {
}

void AVGTDMBattleHUD::SetTargetDamage(float Damage) {
}

void AVGTDMBattleHUD::SetLifeCount(EVGCharaTeam Type, int32 life) {
}

