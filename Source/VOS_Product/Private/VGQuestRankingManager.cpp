#include "VGQuestRankingManager.h"

AVGQuestRankingManager::AVGQuestRankingManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_connecting_dialog = NULL;
    this->m_online_startup = NULL;
    this->m_network_ranking_widget_class = NULL;
    this->m_quest_ranking_list_class = NULL;
    this->m_network_ranking_widget = NULL;
    this->m_quest_ranking_list_agent = NULL;
    this->m_online_startup_error_dialog = NULL;
}

void AVGQuestRankingManager::Start() {
}

void AVGQuestRankingManager::SetQuestID(FVGTextSymbol quest_name) {
}

void AVGQuestRankingManager::SelectRankingType(EVGRanking::Type Type) {
}

AVGQuestRankingManager* AVGQuestRankingManager::GetVGQuestRankingManager(UObject* Context) {
    return NULL;
}

void AVGQuestRankingManager::CancelSelect() {
}

