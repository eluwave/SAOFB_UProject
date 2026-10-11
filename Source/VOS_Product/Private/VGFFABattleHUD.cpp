#include "VGFFABattleHUD.h"

AVGFFABattleHUD::AVGFFABattleHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->m_rule_hud_widget = NULL;
}

void AVGFFABattleHUD::SetTimerWithWarning(float Timer, float max_timer) {
}

void AVGFFABattleHUD::SetTimer(float Timer) {
}

