#include "VGGridItem.h"

FVGGridItem::FVGGridItem() {
    this->index = 0;
    this->subIndex = 0;
    this->CheckedState = ECheckBoxState::Unchecked;
    this->Style = 0;
    this->hidden = false;
    this->Disabled = false;
    this->forbidden = false;
    this->IsOverridingFocusable = false;
    this->Focusable = false;
}

