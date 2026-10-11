#include "VGHudOffScreen.h"

UVGHudOffScreen::UVGHudOffScreen() {
    this->m_MapIcon = NULL;
}

EVGTargetIconType UVGHudOffScreen::GetTargetType() const {
    return EVGTargetIconType::Main;
}

