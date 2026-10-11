#include "VGItemSpecialEffectTable.h"

UVGItemSpecialEffectTable::UVGItemSpecialEffectTable() {
    this->m_item_special_effect_list = NULL;
    this->m_attack_random_range = 5.00f;
    this->m_attack_specialized_min = 0.00f;
    this->m_attack_random_curve = EVGItemSpecialEffectCurve::Linear;
    this->m_weapon_cap_rank = 11;
    this->m_dlc_count = 5;
}

