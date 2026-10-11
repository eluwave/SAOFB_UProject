#include "VGMainMenuWidget.h"

UVGMainMenuWidget::UVGMainMenuWidget() {
    this->m_tab_setting = NULL;
    this->m_status_agent_class = NULL;
    this->m_status_agent = NULL;
    this->m_equip_agent_class = NULL;
    this->m_equip_agent = NULL;
    this->m_skilllearn_agent_class = NULL;
    this->m_skilllearn_agent = NULL;
    this->m_skillequip_agent_class = NULL;
    this->m_skillequip_agent = NULL;
    this->m_goodslist_agent_class = NULL;
    this->m_goodslist_agent = NULL;
    this->m_quest_agent_class = NULL;
    this->m_quest_agent = NULL;
    this->m_map_agent_class = NULL;
    this->m_map_agent = NULL;
    this->m_friend_list_agent_class = NULL;
    this->m_friend_list_agent = NULL;
    this->m_player_card_agent_class = NULL;
    this->m_player_card_agent = NULL;
    this->m_option_agent_class = NULL;
    this->m_option_agent = NULL;
    this->m_data_base_agent_class = NULL;
    this->m_data_base_agent = NULL;
    this->m_medal_collection_agent_class = NULL;
    this->m_medal_collection_agent = NULL;
    this->m_hero_impersonator_agent_class = NULL;
    this->m_hero_impersonator_agent = NULL;
    this->m_memory_chip_change_agent_class = NULL;
    this->m_memory_chip_change_agent = NULL;
    this->m_mail_data = NULL;
    this->m_blur_effect_ui_class = NULL;
    this->m_main_index = NULL;
    this->m_sub_index = NULL;
    this->m_tab_bar = NULL;
    this->m_main_list = NULL;
    this->m_mode_info = NULL;
    this->m_efficacy_info = NULL;
    this->m_navigation_bar = NULL;
    this->m_dialog = NULL;
    this->m_character_tab_is_valid = true;
    this->m_quest_tab_is_valid = true;
    this->m_map_tab_is_valid = true;
    this->m_community_tab_is_valid = true;
    this->m_system_tab_is_valid = true;
    this->m_status_menu_is_valid = true;
    this->m_skill_learn_menu_is_valid = true;
    this->m_gadget_menu_is_valid = true;
    this->m_equip_menu_is_valid = true;
    this->m_item_menu_is_valid = true;
    this->m_main_quest_is_valid = true;
    this->m_sub_quest_is_valid = true;
    this->m_normal_quest_is_valid = false;
    this->m_bounty_hunt_quest_is_valid = true;
    this->m_named_hunt_quest_is_valid = true;
    this->m_treasure_quest_is_valid = true;
    this->m_option_is_valid = true;
    this->m_database_is_valid = true;
    this->m_logout_is_valid = true;
}

void UVGMainMenuWidget::SetTabIndex(int32 in_index) {
}

void UVGMainMenuWidget::OpenMenu(bool is_map) {
}

bool UVGMainMenuWidget::IsClose() {
    return false;
}

void UVGMainMenuWidget::Decide(int32 in_index) {
}

void UVGMainMenuWidget::CloseMenu() {
}

void UVGMainMenuWidget::Cancel() {
}

