#include "VGRankingAgent.h"

AVGRankingAgent::AVGRankingAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_result_widget_class = NULL;
    this->m_ranking_agent_class = NULL;
    this->m_result_widget = NULL;
    this->m_ranking_agent = NULL;
}

void AVGRankingAgent::Start(EVGRanking::Type ranking) {
}

