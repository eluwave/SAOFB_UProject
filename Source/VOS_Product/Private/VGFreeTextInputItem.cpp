#include "VGFreeTextInputItem.h"

UVGFreeTextInputItem::UVGFreeTextInputItem() {
    this->bIsFocusable = true;
    this->m_current_index = -1;
}

void UVGFreeTextInputItem::SetItemText_Implementation(int32 index) {
}

void UVGFreeTextInputItem::SetCurrentValue(int32 value) {
}

bool UVGFreeTextInputItem::IsWindows() const {
    return false;
}

int32 UVGFreeTextInputItem::GetCurrentValue() const {
    return 0;
}

