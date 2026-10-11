#include "VGAIAsset.h"

UVGAIAsset::UVGAIAsset() {
    this->m_difficulty.AddDefaulted(3);
    this->m_ultimate.AddDefaulted(10);
    this->m_satelitescan_time = 10.00f;
    this->m_npc_fa_to_npc = true;
    this->m_npc_fa_only_defence = true;
    this->m_npc_fa_only_tank = false;
    this->m_npc_fa_only_player = false;
}

