#include "VGRoamHUDWidget.h"

UVGRoamHUDWidget::UVGRoamHUDWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_RootCanvas = NULL;
    this->m_HudLogWindow = NULL;
    this->m_HudMiniMap = NULL;
    this->m_HudSubtitles = NULL;
}

UVGHudSubtitles* UVGRoamHUDWidget::GetSubtitles() const {
    return NULL;
}

UVGHudLogWindow* UVGRoamHUDWidget::GetLogWindow() const {
    return NULL;
}

