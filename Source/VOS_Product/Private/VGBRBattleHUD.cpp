#include "VGBRBattleHUD.h"

AVGBRBattleHUD::AVGBRBattleHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->m_rule_hud_widget = NULL;
}

void AVGBRBattleHUD::SubScore(int32 index, int32 score, int32 Count) {
}

void AVGBRBattleHUD::SetTimerWithWarning(float Timer, float max_timer) {
}

void AVGBRBattleHUD::SetTimer(float Timer) {
}

void AVGBRBattleHUD::SetScore(int32 index, int32 score) {
}

void AVGBRBattleHUD::SetPlayer(int32 index, bool is_player) {
}

void AVGBRBattleHUD::SetName(int32 index, const FString& Name) {
}

void AVGBRBattleHUD::SetKillGoal(int32 Goal) {
}

void AVGBRBattleHUD::SetCharacterIcon(int32 index) {
}

void AVGBRBattleHUD::ScoreCollapse(int32 index) {
}

void AVGBRBattleHUD::MoveScore(int32 index, int32 row, int32 column) {
}

void AVGBRBattleHUD::AddScore(int32 index, int32 score, int32 Count) {
}

