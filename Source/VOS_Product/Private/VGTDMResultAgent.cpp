#include "VGTDMResultAgent.h"

AVGTDMResultAgent::AVGTDMResultAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_widget_class_references.AddDefaulted(1);
    this->m_tdm_result_widget_class = NULL;
    this->m_result_widget = NULL;
    this->m_initialized = false;
}

bool AVGTDMResultAgent::Start() {
    return false;
}

void AVGTDMResultAgent::SetResultParameters(const FVGTDMResultParam& param, UVGQuestRecord* QuestRecord) {
}

bool AVGTDMResultAgent::IsInitialized() const {
    return false;
}

void AVGTDMResultAgent::Exit() {
}

