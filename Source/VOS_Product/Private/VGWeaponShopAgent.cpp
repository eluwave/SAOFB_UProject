#include "VGWeaponShopAgent.h"

AVGWeaponShopAgent::AVGWeaponShopAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_weapon_reinforce_widget_class = NULL;
    this->m_weapon_customize_widget_class = NULL;
    this->m_weapon_unleash_widget_class = NULL;
    this->m_customize_material_id = TEXT("MAT00_00");
    this->m_conversion_material_id = TEXT("MAT01_00");
    this->m_reinforce_widget = NULL;
    this->m_customize_widget = NULL;
    this->m_unleash_widget = NULL;
}

