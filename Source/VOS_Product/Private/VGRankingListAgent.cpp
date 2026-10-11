#include "VGRankingListAgent.h"

AVGRankingListAgent::AVGRankingListAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ranking_widget_class = NULL;
    this->m_ranking_widget = NULL;
    this->m_ranking_table = NULL;
    this->m_ranking_progress_table = NULL;
}

