#include "VGOnlineCloudParam.h"

FVGOnlineCloudParam::FVGOnlineCloudParam() {
    this->is_set = false;
    this->Version = 0;
    this->m_rank = EVPOnlineRankType::Rookie;
    this->m_hero_rank = EVPOnlineRankType::Rookie;
    this->m_dm_rank = EVPOnlineRankType::Rookie;
    this->m_dm_hero_rank = EVPOnlineRankType::Rookie;
    this->m_rank_point = 0;
    this->m_hero_rank_point = 0;
    this->m_dm_rank_point = 0;
    this->m_dm_hero_rank_point = 0;
    this->m_penalty_point = 0;
    this->m_coop_play_cnt = 0;
    this->m_coop_destroy_cnt = 0;
    this->m_versus_play_cnt = 0;
    this->m_versus_win_cnt = 0;
    this->m_afasys_deposit = 0;
}

