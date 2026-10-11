#include "VGAvatarCustomizeItem.h"

FVGAvatarCustomizeItem::FVGAvatarCustomizeItem() {
    this->Role = EVGCustomizeRole::None;
    this->EditType = EVGCustomizeEditType::None;
    this->value = 0.00f;
    this->MinValue = 0.00f;
    this->MaxValue = 0.00f;
    this->Checked = false;
    this->hidden = false;
    this->Disabled = false;
    this->CameraID = 0;
    this->default_value = 0.00f;
}

