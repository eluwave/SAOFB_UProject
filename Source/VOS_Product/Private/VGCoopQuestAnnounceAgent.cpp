#include "VGCoopQuestAnnounceAgent.h"

AVGCoopQuestAnnounceAgent::AVGCoopQuestAnnounceAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_widget_class_references.AddDefaulted(3);
    this->m_coop_quest_start_widget_class = NULL;
    this->m_coop_quest_countdown_widget_class = NULL;
    this->m_coop_quest_completion_widget_class = NULL;
    this->m_coop_quest_fail_widget_class = NULL;
    this->m_active_widget = NULL;
    this->m_quest_record = NULL;
    this->m_initialized = false;
}

bool AVGCoopQuestAnnounceAgent::Start(EVGCoopQuestAnnounceAgentMode mode) {
    return false;
}

void AVGCoopQuestAnnounceAgent::SetQuest(UVGQuestRecord* quest) {
}

bool AVGCoopQuestAnnounceAgent::IsInitialized() const {
    return false;
}

void AVGCoopQuestAnnounceAgent::Exit() {
}

