#include "VGAfasysProposalAgent.h"

AVGAfasysProposalAgent::AVGAfasysProposalAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_message_widget_class = NULL;
    this->m_selection_widget_class = NULL;
    this->m_shoping_item_table = NULL;
    this->m_fund_management_asset = NULL;
    this->m_costume_change_time = 0;
    this->m_hair_change_time = 0;
    this->m_adventure_agent = NULL;
    this->m_character = NULL;
    this->m_avater_customize = NULL;
    this->m_customize_setting = NULL;
}

void AVGAfasysProposalAgent::OnStepEndCallback() {
}

void AVGAfasysProposalAgent::OnSelectedCallback(int32 index, const FString& tag) {
}

void AVGAfasysProposalAgent::OnFadeEndCallback() {
}

void AVGAfasysProposalAgent::OnAvatarApplyCompletedCallback(bool IsFlag) {
}

