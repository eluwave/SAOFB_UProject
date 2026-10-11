#include "VGNetworkRankingListAgent.h"

AVGNetworkRankingListAgent::AVGNetworkRankingListAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_scrollnum = 0;
    this->m_data_load_wait_default = 0.00f;
    this->m_ranking_widget = NULL;
    this->m_ranking_table = NULL;
    this->m_ranking_progress_table = NULL;
    this->m_connecting_dialog = NULL;
    this->m_error_dialog = NULL;
    this->m_hero_icon_loader = NULL;
}

