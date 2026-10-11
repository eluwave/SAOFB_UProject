#include "VGAbyssDefenceBattleHUD.h"

AVGAbyssDefenceBattleHUD::AVGAbyssDefenceBattleHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->m_rule_hud_widget = NULL;
}

