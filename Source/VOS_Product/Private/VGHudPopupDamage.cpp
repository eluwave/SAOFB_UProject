#include "VGHudPopupDamage.h"

UVGHudPopupDamage::UVGHudPopupDamage() {
    this->NormalDamageScale = 0.00f;
    this->WeakDamageScale = 0.00f;
    this->BigDamageScale = 0.00f;
    this->SmallDamageScale = 0.00f;
    this->FriendDamageScale = 0.00f;
    this->IsCritical = false;
    this->AnimationType = 0;
    this->m_DamageBase = NULL;
    this->m_BigDamageBase = NULL;
    this->m_WeakDamageBase = NULL;
}

