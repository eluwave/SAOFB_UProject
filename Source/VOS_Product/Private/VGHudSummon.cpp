#include "VGHudSummon.h"

UVGHudSummon::UVGHudSummon() {
    this->SummonState = EVGHudSummonState::Impossible;
    this->Rank1SummonableValue = 0.00f;
    this->Rank2SummonableValue = 0.00f;
    this->Rank3SummonableValue = 0.00f;
    this->UpdateInterval = 1;
    this->HpBarCautionThreshold = 0.00f;
    this->HpBarWarningThreshold = 0.00f;
    this->SummonGaugeRatio = 0.00f;
    this->m_HpBar = NULL;
    this->m_name = NULL;
}

