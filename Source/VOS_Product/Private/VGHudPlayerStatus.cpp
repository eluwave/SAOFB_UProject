#include "VGHudPlayerStatus.h"

UVGHudPlayerStatus::UVGHudPlayerStatus() {
    this->AmmoWarningThreshold = 0.00f;
    this->BulletAndSwordIcon = NULL;
    this->NoneIcon = NULL;
    this->SkillSwitchCommand = NULL;
    this->m_character_role_icon = NULL;
    this->WeaponIndex = 0;
    this->SubWeaponIndex = 0;
    this->DamageDispTime = 0.00f;
    this->IsOpened = false;
    this->m_VisibilityControlPanel = NULL;
    this->m_PlayerIcon = NULL;
    this->m_PlayerIconSub = NULL;
    this->m_RoleIcon = NULL;
    this->m_SpBar = NULL;
    this->m_UltimateGauge = NULL;
    this->m_MainAmmoBox = NULL;
    this->m_MainAmmoText = NULL;
    this->m_MainAmmoMaxText = NULL;
    this->m_SubAmmoBox = NULL;
    this->m_SubAmmoText = NULL;
    this->m_SubAmmoMaxText = NULL;
    this->m_MainGatling = NULL;
    this->m_SubGatling = NULL;
    this->m_SkillSet = NULL;
    this->m_SkillFocus = NULL;
}

void UVGHudPlayerStatus::UseSkill(int32 slot_id) {
}

void UVGHudPlayerStatus::UpdateWeaponIndex() {
}

void UVGHudPlayerStatus::Reload() {
}

bool UVGHudPlayerStatus::IsEnabledDispConditions() {
    return false;
}

void UVGHudPlayerStatus::Damaged() {
}

