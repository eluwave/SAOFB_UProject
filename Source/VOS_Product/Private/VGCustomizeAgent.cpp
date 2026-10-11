#include "VGCustomizeAgent.h"

AVGCustomizeAgent::AVGCustomizeAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_gender_select_widget_class = NULL;
    this->m_customize_widget_class = NULL;
    this->m_preset_data = NULL;
    this->m_vfx_gender_select[0] = NULL;
    this->m_vfx_gender_select[1] = NULL;
    this->m_emotion_table = NULL;
    this->m_action_id[0] = 0;
    this->m_action_id[1] = 0;
    this->m_weapon[0] = NULL;
    this->m_weapon[1] = NULL;
    this->m_facial_pattern = EVGFacialExpressionPattern::Normal;
    this->m_default_figure_param[0] = 0;
    this->m_default_figure_param[1] = 0;
    this->m_gender_select_widget = NULL;
    this->m_preset_select_widget = NULL;
    this->m_customize_widget = NULL;
    this->m_customize_sheet = NULL;
    this->m_customize_sheet_instance = NULL;
    this->m_target_chara = EVGCharaUnique::None;
    this->m_avatar[0] = NULL;
    this->m_avatar[1] = NULL;
    this->m_customize_setting = NULL;
    this->m_figure_generator = NULL;
    this->m_figure_setting = NULL;
    this->m_current_voice_cue_sheet = NULL;
    this->m_loading_voice_cue_sheet = NULL;
    this->m_nameentry_widget_class = NULL;
    this->m_nameentry_widget = NULL;
}

void AVGCustomizeAgent::StartAvatarCustomize(ACharacter* avatar, ACameraActor* Camera, UVGAvatarCustomizeSheet* sheet) {
}

void AVGCustomizeAgent::CustomizeSubItemsToGridItems(const TArray<FVGAvatarCustomizeSubItem>& InValue, TArray<FVGGridItem>& outValue) {
}

void AVGCustomizeAgent::CommitSettingData(EVGCharaUnique Type, bool partsOnly) {
}

