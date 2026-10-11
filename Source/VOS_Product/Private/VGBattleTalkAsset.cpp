#include "VGBattleTalkAsset.h"

UVGBattleTalkAsset::UVGBattleTalkAsset() {
    this->m_group_config_talk.AddDefaulted(76);
    this->m_group_config_conversation.AddDefaulted(5);
    this->m_find_hiding_interval = 30.00f;
    this->m_good_action_timer_kill_enemy = 3.00f;
    this->m_good_action_timer_use_skill = 5.00f;
    this->m_good_action_timer_use_gadget = 5.00f;
}

