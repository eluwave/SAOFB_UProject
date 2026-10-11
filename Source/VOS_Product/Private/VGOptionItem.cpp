#include "VGOptionItem.h"

FVGOptionItem::FVGOptionItem() {
    this->setting = EVGOptionSetting::None;
    this->Type = EVGOptionItemType::SpinBox;
    this->is_title_only = false;
}

