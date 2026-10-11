#include "VGBRResultAgent.h"

AVGBRResultAgent::AVGBRResultAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_widget_class_references.AddDefaulted(1);
    this->m_result_widget_class = NULL;
    this->m_result_widget = NULL;
    this->m_initialized = false;
}

bool AVGBRResultAgent::Start() {
    return false;
}

void AVGBRResultAgent::SetResultParameters(const FVGBRResultParam& param, UVGQuestRecord* QuestRecord) {
}

bool AVGBRResultAgent::IsInitialized() const {
    return false;
}

void AVGBRResultAgent::Exit() {
}

