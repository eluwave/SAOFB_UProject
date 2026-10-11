#include "VGEquipWidget.h"

UVGEquipWidget::UVGEquipWidget() {
    this->m_item_category_icon = NULL;
    this->m_weapon_division_icon = NULL;
    this->m_accessory_category_icon = NULL;
    this->m_special_effect_menu_class = NULL;
    this->m_special_effect_menu_param = NULL;
    this->m_preview_anim = NULL;
    this->m_equip_list = NULL;
    this->m_equip_info = NULL;
    this->m_left_window = NULL;
    this->m_weapon_list = NULL;
    this->m_costume_list = NULL;
    this->m_right_window = NULL;
    this->m_goods_info = NULL;
    this->m_comp_window = NULL;
    this->m_before_info = NULL;
    this->m_after_info = NULL;
    this->m_equip_info_s = NULL;
    this->m_equip_info_s_weight = NULL;
    this->m_model_preview = NULL;
    this->m_sort_list = NULL;
    this->m_navigation_bar = NULL;
    this->m_dialog = NULL;
    this->m_special_effect_filter_list = NULL;
    this->m_character_id = EVGCharaUnique::None;
    this->m_calc_component = NULL;
    this->m_passive_skill_component = NULL;
}

void UVGEquipWidget::Open() {
}

void UVGEquipWidget::Close(bool bRemove) {
}

