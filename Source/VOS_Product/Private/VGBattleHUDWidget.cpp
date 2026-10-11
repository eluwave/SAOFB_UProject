#include "VGBattleHUDWidget.h"

UVGBattleHUDWidget::UVGBattleHUDWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PopupDamageClass = NULL;
    this->BigPopupDamageRateThreshold = 0.00f;
    this->SmallPopupDamageRateThreshold = 0.00f;
    this->PopupDamageNum = 0;
    this->TestInt = 0;
    this->m_RootCanvas = NULL;
    this->m_HudADS = NULL;
    this->m_HudUFGReticle = NULL;
    this->m_HudBattleMessage = NULL;
    this->m_HudPlayerStatus = NULL;
    this->m_HudPartyStatus = NULL;
    this->m_HudPrise = NULL;
    this->m_HudPriseMess = NULL;
    this->m_HudCongrats = NULL;
    this->m_HudPopupDamagePanel = NULL;
    this->m_HudDamage = NULL;
    this->m_HudRuleGetMore = NULL;
    this->m_HudCommonPanel = NULL;
    this->m_HudGoodAction = NULL;
    this->m_WireGunReticleHUD = NULL;
}

void UVGBattleHUDWidget::SetGunSightVisibilityByEvent(bool is_visible) {
}

void UVGBattleHUDWidget::Set3DHudVisibilityByEvent(bool is_visible) {
}

UVGHudUFGReticle* UVGBattleHUDWidget::GetUFGReticle() const {
    return NULL;
}

UVGMessageWindow* UVGBattleHUDWidget::GetBattleMessage() const {
    return NULL;
}

UVGHudAimDownSight* UVGBattleHUDWidget::GetADS() const {
    return NULL;
}

