#include "VGBattleOverwriteRuleParam.h"

FVGBattleOverwriteRuleParam::FVGBattleOverwriteRuleParam() {
    this->is_set = false;
    this->play_time = 0.00f;
    this->respawn_num = 0;
    this->kill_goal = 0;
    this->death_penalty = 0;
    this->has_handicap = false;
    this->battle_type = 0;
    this->score_streak_gauge_rate = 0.00f;
    this->is_disable_acc_param = false;
    this->is_disable_weapon_param = false;
    this->is_disable_ultimate = false;
}

