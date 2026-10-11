#include "VGSteamOptionItem.h"

FVGSteamOptionItem::FVGSteamOptionItem() {
    this->option_setting = EVGOptionSetting::None;
    this->setting = EVGPlatformOptionSetting::WindowMode;
    this->Type = EVGPlatformOptionItemType::SpinBox;
}

