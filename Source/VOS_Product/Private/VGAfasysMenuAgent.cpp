#include "VGAfasysMenuAgent.h"

AVGAfasysMenuAgent::AVGAfasysMenuAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_message_widget_class = NULL;
    this->m_selection_widget_class = NULL;
    this->m_afasys_menu_select_class = NULL;
    this->m_afasys_menu_emotion_class = NULL;
    this->m_afasys_menu_fund_management_class = NULL;
    this->m_afasys_menu_ai_class = NULL;
    this->m_afasys_menu_coordinate_class = NULL;
    this->m_character = NULL;
    this->m_adventure_agent = NULL;
    this->m_afasys_select = NULL;
    this->m_afasys_emotion = NULL;
    this->m_afasys_fund_management = NULL;
    this->m_afasys_ai = NULL;
    this->m_afasys_coordinate = NULL;
}

void AVGAfasysMenuAgent::TalkEnd() {
}

void AVGAfasysMenuAgent::Start() {
}

void AVGAfasysMenuAgent::SetCharacter(AVGAfasysMenuCharacter* Character) {
}

void AVGAfasysMenuAgent::OnStepEndCallback() {
}

void AVGAfasysMenuAgent::OnSetTextCallback(int32 voice_id, int32 action_id) {
}

void AVGAfasysMenuAgent::OnSelectedIndexChangeCallback(int32 index) {
}

void AVGAfasysMenuAgent::OnSelectedDecideCallback(int32 index, const FString& tag) {
}

void AVGAfasysMenuAgent::OnSelectedCancelCallback(const FString& tag) {
}

bool AVGAfasysMenuAgent::IsTalk() {
    return false;
}

AVGAfasysMenuCharacter* AVGAfasysMenuAgent::GetCharacter() {
    return NULL;
}

