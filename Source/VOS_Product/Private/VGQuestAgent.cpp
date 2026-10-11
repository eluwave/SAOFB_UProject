#include "VGQuestAgent.h"

AVGQuestAgent::AVGQuestAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_quest_browse_widget_class = NULL;
    this->m_quest_undertake_widget_class = NULL;
    this->m_quest_widget = NULL;
    this->m_quest_dialog = NULL;
    this->m_dialog = NULL;
}

void AVGQuestAgent::Start(EVGQuestAgentMode::Type mode, int32 param) {
}

void AVGQuestAgent::SetQuests(const TArray<UVGQuestRecord*>& quests) {
}

void AVGQuestAgent::SetQuest(UVGQuestRecord* quest) {
}

void AVGQuestAgent::SetCategoryFilter(int32 filterFlag) {
}

void AVGQuestAgent::SetCaption(FText Caption) {
}

void AVGQuestAgent::ResetCategoryFilter() {
}

void AVGQuestAgent::Exit() {
}

void AVGQuestAgent::AddCategoryFilter(EVGQuestCategory::Type Filter) {
}

