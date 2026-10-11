#include "VGCustomizeWidget.h"

UVGCustomizeWidget::UVGCustomizeWidget() {
    this->m_grid_item_class[0] = NULL;
    this->m_grid_item_class[1] = NULL;
    this->m_grid_item_class[2] = NULL;
    this->m_grid_item_class[3] = NULL;
    this->m_grid_item_class[4] = NULL;
    this->m_grid_item_class[5] = NULL;
    this->m_grid_item_class[6] = NULL;
    this->m_page_header = NULL;
    this->m_gv_page = NULL;
    this->m_switcher = NULL;
}

void UVGCustomizeWidget::UpdatePage(int32 index, const FVGAvatarCustomizePage& page) {
}

void UVGCustomizeWidget::SetItem(int32 page, int32 index, const FVGAvatarCustomizeItem& Item) {
}

void UVGCustomizeWidget::Reset() {
}

void UVGCustomizeWidget::Open() {
}

FText UVGCustomizeWidget::GetCurrentPageCaption() const {
    return FText::GetEmpty();
}

void UVGCustomizeWidget::Close(bool bRemove) {
}

void UVGCustomizeWidget::ClearPage(int32 index) {
}

void UVGCustomizeWidget::AddPage(const FVGAvatarCustomizePage& page) {
}

void UVGCustomizeWidget::AddItem(int32 page, const FVGAvatarCustomizeItem& Item) {
}

