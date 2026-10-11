#include "VGHudPrise.h"

UVGHudPrise::UVGHudPrise() {
    this->State = EVGHudPriseState::NormalLoop;
    this->m_VisibilityControlPanel = NULL;
    this->m_PriseValue = NULL;
    this->m_PriseGauge = NULL;
    this->m_Value1 = NULL;
    this->m_Value10 = NULL;
    this->m_Value100 = NULL;
}

