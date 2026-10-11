#include "VGSkillOffsetRule.h"

FVGSkillOffsetRule::FVGSkillOffsetRule() {
    this->state_rule = EVGSkillOffsetState::All;
    this->input_rule = EVGSkillOffsetInput::NoCheck;
    this->weapon_rule = EVGSkillOffsetWeapon::All;
    this->action_id = 0;
}

