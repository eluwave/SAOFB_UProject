#include "VGFFAQuestAnnounceAgent.h"

AVGFFAQuestAnnounceAgent::AVGFFAQuestAnnounceAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_widget_class_references.AddDefaulted(4);
    this->m_quest_start_widget_class = NULL;
    this->m_quest_countdown_widget_class = NULL;
    this->m_quest_completion_widget_class = NULL;
    this->m_quest_fail_widget_class = NULL;
    this->m_active_widget = NULL;
    this->m_quest_record = NULL;
}

bool AVGFFAQuestAnnounceAgent::Start(EVGFFAQuestAnnounceAgentMode mode) {
    return false;
}

void AVGFFAQuestAnnounceAgent::SetQuest(UVGQuestRecord* quest) {
}

bool AVGFFAQuestAnnounceAgent::IsInitialized() const {
    return false;
}

void AVGFFAQuestAnnounceAgent::Exit() {
}

