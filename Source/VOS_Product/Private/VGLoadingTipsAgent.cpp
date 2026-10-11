#include "VGLoadingTipsAgent.h"

AVGLoadingTipsAgent::AVGLoadingTipsAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_tips_widget = NULL;
    this->m_tips_type = EVGLoadingTipsTypeId::None;
    this->m_tips_agent_proxy = NULL;
}

void AVGLoadingTipsAgent::StopLoading() {
}

void AVGLoadingTipsAgent::SetDebugMode(bool isEnable) {
}

bool AVGLoadingTipsAgent::QueryOpen(int32 max_tips_display_num, UVGLoadingTips* tutorial_widget) {
    return false;
}

AVGLoadingTipsAgent* AVGLoadingTipsAgent::OpenLoadingTips(UObject* Context, UVGLoadingTips* tips_widget, int32 max_tips_display_num, EVGLoadingTipsTypeId tips_type, const FName& ID, UTexture2D* tips_img) {
    return NULL;
}

bool AVGLoadingTipsAgent::IsAnyLoadingTipsUp(UObject* Context, bool StrictCheck) {
    return false;
}

void AVGLoadingTipsAgent::Close() {
}

