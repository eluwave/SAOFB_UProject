#include "VGHudLogWindow.h"

UVGHudLogWindow::UVGHudLogWindow() {
    this->MaxLogNum = 8;
    this->LineHeightPercentage = 1.00f;
    this->TopMargin = 0.00f;
    this->FadeWaitTime = 0.00f;
    this->FadeOutTime = 0.00f;
    this->AilmentData = NULL;
    this->BuffData = NULL;
    this->DebuffData = NULL;
    this->m_WidgetRoot = NULL;
    this->m_BasePanel = NULL;
    this->m_SbLogPanel = NULL;
    this->m_LogBase = NULL;
}

void UVGHudLogWindow::SetVisibleFlag(bool is_visible) {
}

void UVGHudLogWindow::Open() {
}

void UVGHudLogWindow::Close() {
}

void UVGHudLogWindow::AppendRecoveryLifeLog(AVGBattleCharacter* Owner, AVGBattleCharacter* Target) {
}

void UVGHudLogWindow::AppendRecoveryAilmentLog(AVGBattleCharacter* Owner, AVGBattleCharacter* Target, EVGStatusAilment ailment) {
}

void UVGHudLogWindow::AppendLog(FText Text, EVGHudLogType::Type Type) {
}

void UVGHudLogWindow::AppendGetExpLog(int32 Exp) {
}

void UVGHudLogWindow::AppendDebuffEffectLog(EVGStatusBuff debuff) {
}

void UVGHudLogWindow::AppendBuffEffectLog(EVGStatusBuff buff) {
}

