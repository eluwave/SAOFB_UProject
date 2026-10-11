#include "VGFriendListEquip.h"

UVGFriendListEquip::UVGFriendListEquip() {
    this->m_sp_effect_menu_param = NULL;
    this->m_weapon_skill00 = NULL;
    this->m_weapon_skill01 = NULL;
    this->m_gadget_skill = NULL;
    this->m_weapon_sp_effect00 = NULL;
    this->m_weapon_sp_effect01 = NULL;
    this->m_accessory_sp_effect00 = NULL;
    this->m_accessory_sp_effect01 = NULL;
    this->m_weapon_proficiency = NULL;
    this->m_hp_meter = NULL;
    this->m_exp_meter = NULL;
    this->m_friend_meter = NULL;
    this->m_target_chara_id = EVGCharaUnique::None;
}

void UVGFriendListEquip::ChangePage() {
}

