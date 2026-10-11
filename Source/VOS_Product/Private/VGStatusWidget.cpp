#include "VGStatusWidget.h"

UVGStatusWidget::UVGStatusWidget() {
    this->m_status_dialog_class = NULL;
    this->m_sp_effect_menu_param = NULL;
    this->m_preview_anim = NULL;
    this->m_param_window = NULL;
    this->m_battle_param = NULL;
    this->m_equip_list = NULL;
    this->m_status_base = NULL;
    this->m_weapon_skill00 = NULL;
    this->m_weapon_skill01 = NULL;
    this->m_gadget_skill = NULL;
    this->m_weapon_sp_effect00 = NULL;
    this->m_weapon_sp_effect01 = NULL;
    this->m_weapon_proficiency = NULL;
    this->m_weight_meter = NULL;
    this->m_hp_meter = NULL;
    this->m_exp_meter = NULL;
    this->m_money = NULL;
    this->m_navigation_bar = NULL;
    this->m_model_preview = NULL;
    this->m_dialog = NULL;
    this->m_target_character = NULL;
    this->m_target_chara_id = EVGCharaUnique::None;
    this->m_calc_component = NULL;
    this->m_passive_skill_component = NULL;
}

void UVGStatusWidget::Open() {
}

void UVGStatusWidget::Close(bool bRemove) {
}

