#include "VGDefenceQuestAnnounceAgent.h"

AVGDefenceQuestAnnounceAgent::AVGDefenceQuestAnnounceAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_widget_class_references.AddDefaulted(4);
    this->m_quest_start_widget_class = NULL;
    this->m_quest_countdown_widget_class = NULL;
    this->m_quest_completion_widget_class = NULL;
    this->m_quest_fail_widget_class = NULL;
    this->m_active_widget = NULL;
    this->m_quest_record = NULL;
}

bool AVGDefenceQuestAnnounceAgent::Start(EVGDefenceQuestAnnounceAgentMode mode) {
    return false;
}

void AVGDefenceQuestAnnounceAgent::SetQuest(UVGQuestRecord* quest) {
}

bool AVGDefenceQuestAnnounceAgent::IsInitialized() const {
    return false;
}

void AVGDefenceQuestAnnounceAgent::Exit() {
}

