#include "VGHudPlayerSkill.h"

UVGHudPlayerSkill::UVGHudPlayerSkill() {
    this->SkillIcon = NULL;
    this->State = EVGHudPlayerSkillState::Use;
    this->m_SkillIconImage = NULL;
    this->m_SkillGauge = NULL;
}

void UVGHudPlayerSkill::SetSkillIcon(UTexture2D* skill_icon) {
}

void UVGHudPlayerSkill::SetSkillGaugeRate(float rate) {
}

void UVGHudPlayerSkill::SetSkillGaugeColor(FLinearColor Color) {
}

void UVGHudPlayerSkill::ResetAnimation() {
}

