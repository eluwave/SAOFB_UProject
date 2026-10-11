#include "VGRoamHUD.h"

AVGRoamHUD::AVGRoamHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->m_roam_hud_widget = NULL;
    this->m_roam_back_hud_widget = NULL;
    this->m_main_menu_widget = NULL;
    this->m_main_menu_class = NULL;
    this->m_map_system = NULL;
    this->m_map_system_class = NULL;
    this->m_emotion_list_agent = NULL;
    this->m_emotion_list_class = NULL;
    this->m_online_emotion_list_agent = NULL;
    this->m_online_emotion_list_class = NULL;
    this->m_quest_info_widget = NULL;
    this->m_subscene_agent = NULL;
    this->m_subscene_agent_class = NULL;
    this->m_subscene_created = false;
    this->m_navigation_bar = NULL;
    this->m_blur_effect = NULL;
    this->m_blur_effect_ref = 0;
    this->m_emotion_list_is_valid = true;
}

UVGRoamHUDWidget* AVGRoamHUD::GetRoamHUDWidget() const {
    return NULL;
}

UVGRoamBackHUDWidget* AVGRoamHUD::GetRoamBackHUDWidget() const {
    return NULL;
}

UVGQuestInfoWidget* AVGRoamHUD::GetQuestInfoWidget() const {
    return NULL;
}

