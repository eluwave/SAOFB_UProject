#include "VGTDMQuestAnnounceAgent.h"

AVGTDMQuestAnnounceAgent::AVGTDMQuestAnnounceAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_widget_class_references.AddDefaulted(4);
    this->m_tdm_quest_start_widget_class = NULL;
    this->m_tdm_quest_countdown_widget_class = NULL;
    this->m_tdm_quest_completion_widget_class = NULL;
    this->m_tdm_quest_fail_widget_class = NULL;
    this->m_active_widget = NULL;
    this->m_quest_record = NULL;
    this->m_initialized = false;
}

bool AVGTDMQuestAnnounceAgent::Start(EVGTDMQuestAnnounceAgentMode mode) {
    return false;
}

void AVGTDMQuestAnnounceAgent::SetQuest(UVGQuestRecord* quest) {
}

bool AVGTDMQuestAnnounceAgent::IsInitialized() const {
    return false;
}

void AVGTDMQuestAnnounceAgent::Exit() {
}

