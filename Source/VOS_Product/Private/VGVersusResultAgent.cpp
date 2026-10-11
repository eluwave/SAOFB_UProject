#include "VGVersusResultAgent.h"

AVGVersusResultAgent::AVGVersusResultAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_widget_class_references.AddDefaulted(1);
    this->m_versus_result_widget_class = NULL;
    this->m_result_widget = NULL;
    this->m_initialized = false;
}

bool AVGVersusResultAgent::Start() {
    return false;
}

void AVGVersusResultAgent::SetResultParameters(const FVGVersusResultParam& param, UVGQuestRecord* QuestRecord) {
}

bool AVGVersusResultAgent::IsInitialized() const {
    return false;
}

void AVGVersusResultAgent::Exit() {
}

