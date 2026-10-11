#include "VGHudPriseMess.h"

UVGHudPriseMess::UVGHudPriseMess() {
    this->LifeTime = 0.00f;
    this->State = EVGHudPriseMessState::Idle;
    this->m_VisibilityControlPanel = NULL;
    this->m_PriseMessPanel = NULL;
    this->m_PriseIcon = NULL;
    this->m_PriseIconEff = NULL;
    this->m_Message = NULL;
    this->m_CategolyIcon = NULL;
    this->m_CategolyText = NULL;
    this->m_AcquirerName = NULL;
}

