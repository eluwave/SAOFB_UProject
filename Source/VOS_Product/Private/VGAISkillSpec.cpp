#include "VGAISkillSpec.h"

FVGAISkillSpec::FVGAISkillSpec() {
    this->skill_id = 0;
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
    this->input_time = 0.00f;
    this->input_time_add = 0.00f;
    this->input_time_extend = 0.00f;
    this->input_extend_condition = NULL;
    this->initial_speed = 0.00f;
    this->initial_speed_fast = 0.00f;
    this->gravity_scale = 0.00f;
}

