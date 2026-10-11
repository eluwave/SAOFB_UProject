#include "VGScorestreak.h"

AVGScorestreak::AVGScorestreak(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_gauge_max = 100.00f;
    this->m_gauge_limit = 200.00f;
    this->m_gauge_decrease = 2.00f;
    this->m_gauge_decrease_vs = 0.00f;
    this->m_damage_gauge_decrease = 0.05f;
    this->m_damage_gauge_decrease_vs = 1.00f;
    this->m_dead_gauge_decrease = 0.20f;
    this->m_dead_gauge_decrease_vs = 50.00f;
    this->m_good_action_reptation_value = 1.00f;
}

