#include "VGMapIconInfo.h"

FVGMapIconInfo::FVGMapIconInfo() {
    this->Type = EVGMapIconType::Player;
    this->icon_texture = NULL;
    this->Scale = 0.00f;
    this->draw_priolity = 0;
    this->is_display_minimap = false;
    this->minimap_icon_scale = 0.00f;
    this->is_display_hud = false;
    this->is_display_hud_name = false;
    this->is_display_hud_status_icon = false;
    this->hud_icon_scale = 0.00f;
}

