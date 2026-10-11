#include "VGBTD_RandomByDifficulty.h"

UVGBTD_RandomByDifficulty::UVGBTD_RandomByDifficulty() {
    this->NodeName = TEXT("VGBTD RandomByDifficulty");
    this->m_difficulty_type = EVGBTDifficultyType::GameDifficulty;
    this->m_easy_probability = 0.00f;
    this->m_normal_probability = 0.00f;
    this->m_hard_probability = 0.00f;
    this->m_ai_difficulty_mul = 1.00f;
    this->m_ai_difficulty_add = 0.00f;
    this->m_generate = false;
}

