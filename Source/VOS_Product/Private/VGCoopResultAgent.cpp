#include "VGCoopResultAgent.h"

AVGCoopResultAgent::AVGCoopResultAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_coop_result_widget_class = NULL;
    this->m_result_widget = NULL;
    this->m_initialized = false;
}

void AVGCoopResultAgent::UpdatePrize() {
}

bool AVGCoopResultAgent::Start() {
    return false;
}

void AVGCoopResultAgent::SetResultParameters(const FVGCoopResultParam& param, UVGQuestRecord* QuestRecord) {
}

bool AVGCoopResultAgent::IsInitialized() const {
    return false;
}

void AVGCoopResultAgent::Exit() {
}

