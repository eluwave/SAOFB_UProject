#include "VGGoodsInfo.h"

UVGGoodsInfo::UVGGoodsInfo() {
    this->m_info_type = EVGGoodsInfoType::Weapon;
    this->m_sp_effect_menu_param = NULL;
    this->m_shot_type_menu_param = NULL;
    this->m_accuracy_rank_menu_param = NULL;
    this->m_weapon_spec_page = 0;
    this->m_weapon_spec_page_max = 0;
    this->m_show_page_index = true;
    this->m_use_preview_costume = false;
    this->m_weapon_physical_power = NULL;
    this->m_weapon_optical_power = NULL;
    this->m_weapon_melee_power = NULL;
    this->m_weapon_blast_power = NULL;
    this->m_weapon_rank = NULL;
    this->m_weapon_bullet = NULL;
    this->m_weapon_bullet_type = NULL;
    this->m_weapon_shot_type = NULL;
    this->m_weapon_weight = NULL;
    this->m_weapon_range = NULL;
    this->m_weapon_speed = NULL;
    this->m_weapon_hit = NULL;
    this->m_critical_probability = NULL;
    this->m_critical_factor = NULL;
    this->m_weapon_passive_skill = NULL;
    this->m_weapon_note = NULL;
    this->m_weapon_param = NULL;
    this->m_accessory_note = NULL;
    this->m_accessory_passive_skill = NULL;
    this->m_gadget_info = NULL;
    this->m_learning_info = NULL;
    this->m_recast_info = NULL;
    this->m_common_note = NULL;
    this->m_rarity_text = NULL;
}

bool UVGGoodsInfo::CanPreviewCostume() const {
    return false;
}

