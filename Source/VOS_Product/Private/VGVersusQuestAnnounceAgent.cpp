#include "VGVersusQuestAnnounceAgent.h"

AVGVersusQuestAnnounceAgent::AVGVersusQuestAnnounceAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_widget_class_references.AddDefaulted(4);
    this->m_versus_quest_start_widget_class = NULL;
    this->m_versus_quest_countdown_widget_class = NULL;
    this->m_versus_quest_completion_widget_class = NULL;
    this->m_versus_quest_fail_widget_class = NULL;
    this->m_active_widget = NULL;
    this->m_quest_record = NULL;
    this->m_initialized = false;
}

bool AVGVersusQuestAnnounceAgent::Start(EVGVersusQuestAnnounceAgentMode mode) {
    return false;
}

void AVGVersusQuestAnnounceAgent::SetQuest(UVGQuestRecord* quest) {
}

bool AVGVersusQuestAnnounceAgent::IsInitialized() const {
    return false;
}

void AVGVersusQuestAnnounceAgent::Exit() {
}

