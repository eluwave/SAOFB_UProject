#include "VGSkillHeader.h"

UVGSkillHeader::UVGSkillHeader() {
    this->ID = 0;
    this->Icon = NULL;
    this->ai_guide = EVGAISkillCategory::Unknown;
    this->ai_buff_index = 0;
    this->ai_flag = 0;
    this->ai_priority = 5;
    this->ai_condition = NULL;
    this->ai_range_min = 0.00f;
    this->ai_range_max = 340282346638528859811704183484516925440.00f;
    this->ai_distance_min = 0.00f;
    this->ai_distance_max = 340282346638528859811704183484516925440.00f;
    this->ai_hate = 0.00f;
    this->ai_grenade_speed = 0.00f;
    this->ai_grenade_speed_fast = 0.00f;
    this->ai_input_time = 0.10f;
    this->ai_input_time_add = 0.00f;
    this->ai_input_time_extend = 0.00f;
    this->ai_release_condition = NULL;
    this->skill_point = 0;
    this->mastery_add = 0;
    this->mastery_max = 0;
}

