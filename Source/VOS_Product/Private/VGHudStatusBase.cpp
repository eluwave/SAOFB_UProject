#include "VGHudStatusBase.h"

UVGHudStatusBase::UVGHudStatusBase() {
    this->HpBarCautionThreshold = 0.00f;
    this->HpBarWarningThreshold = 0.00f;
    this->AilmentIconData = NULL;
    this->BuffIconData = NULL;
    this->DebuffIconData = NULL;
    this->m_TargetCharacter = NULL;
}

