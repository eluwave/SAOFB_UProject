#include "VGAIFortTeam.h"

AVGAIFortTeam::AVGAIFortTeam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_attacker_respawn_time = 0.00f;
    this->m_healer_respawn_time = 0.00f;
    this->m_cannon_respawn_time = 0.00f;
    this->m_angry_mode_num = 0;
    this->m_angry_mode_time = 0.00f;
    this->m_generator = NULL;
}

