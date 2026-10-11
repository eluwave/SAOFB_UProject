#include "VGRoamBackHUDWidget.h"

UVGRoamBackHUDWidget::UVGRoamBackHUDWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_RootCanvas = NULL;
    this->m_HudTargetIconPanel = NULL;
    this->m_HudActorWidgetPanel = NULL;
}

void UVGRoamBackHUDWidget::Set3DHudVisibilityByEvent(bool is_visible) {
}

