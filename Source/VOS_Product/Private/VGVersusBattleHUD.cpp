#include "VGVersusBattleHUD.h"

AVGVersusBattleHUD::AVGVersusBattleHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->m_versus_hud_widget = NULL;
}

void AVGVersusBattleHUD::SetTimerWithWarning(float Timer, float max_timer) {
}

void AVGVersusBattleHUD::SetTimer(float Timer) {
}

void AVGVersusBattleHUD::SetTeamDamage(EVGCharaTeam Type, float Damage) {
}

void AVGVersusBattleHUD::SetTargetDamage(float Damage) {
}

