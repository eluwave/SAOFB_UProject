#include "VGAIUltimateSkill.h"

FVGAIUltimateSkill::FVGAIUltimateSkill() {
    this->weapon = EVGSkillType::HandGun;
    this->Target = EVGAISkillTarget::None;
    this->flag = 0;
    this->Priority = 0;
    this->Category = EVGAISkillCategory::Unknown;
    this->buff = EVGStatusBuff::Attack;
    this->power = 0.00f;
    this->condition = NULL;
    this->range_min = 0.00f;
    this->range_max = 0.00f;
    this->distance_min = 0.00f;
    this->distance_max = 0.00f;
}

