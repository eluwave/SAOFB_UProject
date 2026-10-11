#include "VGMissionResultAgent.h"

AVGMissionResultAgent::AVGMissionResultAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_widget_class_references.AddDefaulted(1);
    this->m_mission_result_widget_class = NULL;
    this->m_result_widget = NULL;
    this->m_initialized = false;
}

bool AVGMissionResultAgent::Start() {
    return false;
}

void AVGMissionResultAgent::SetResultParameters(const FVGMissionResultParam& param) {
}

void AVGMissionResultAgent::SetQuestRecord(UVGQuestRecord* QuestRecord) {
}

bool AVGMissionResultAgent::IsInitialized() const {
    return false;
}

void AVGMissionResultAgent::Exit() {
}

