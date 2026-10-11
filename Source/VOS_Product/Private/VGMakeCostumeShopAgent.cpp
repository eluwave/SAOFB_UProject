#include "VGMakeCostumeShopAgent.h"

AVGMakeCostumeShopAgent::AVGMakeCostumeShopAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_costume_widget_class = NULL;
    this->m_costume_effect_widget_class = NULL;
    this->m_preview_customize_setting_male = NULL;
    this->m_preview_customize_setting_female = NULL;
    this->m_update_preview_delay_time = 0.25f;
    this->m_rotation_speed = 0.00f;
    this->m_camera_near = 0.00f;
    this->m_camera_far = 0.00f;
    this->m_camera_height_offset = 0.00f;
    this->m_default_model_yaw = 0.00f;
    this->m_recipe_select_voice_time = 0.00f;
    this->m_costume_widget = NULL;
    this->m_anchor = NULL;
    this->m_costume_spline_position = NULL;
    this->m_costume_spline_lookat = NULL;
    this->m_prev_image = NULL;
    this->m_customize_setting_male = NULL;
    this->m_customize_setting_female = NULL;
    this->m_figure_setting_male = NULL;
    this->m_figure_setting_female = NULL;
    this->m_customize_component = NULL;
}

void AVGMakeCostumeShopAgent::OnAvatarApplyCompletedCallback(bool is_flag) {
}

