#include "VGBRQuestAnnounceAgent.h"

AVGBRQuestAnnounceAgent::AVGBRQuestAnnounceAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_widget_class_references.AddDefaulted(3);
    this->m_quest_start_widget_class = NULL;
    this->m_quest_countdown_widget_class = NULL;
    this->m_quest_completion_widget_class = NULL;
    this->m_quest_fail_widget_class = NULL;
    this->m_active_widget = NULL;
    this->m_quest_record = NULL;
}

bool AVGBRQuestAnnounceAgent::Start(EVGBRQuestAnnounceAgentMode mode) {
    return false;
}

void AVGBRQuestAnnounceAgent::SetQuest(UVGQuestRecord* quest) {
}

bool AVGBRQuestAnnounceAgent::IsInitialized() const {
    return false;
}

void AVGBRQuestAnnounceAgent::Exit() {
}

