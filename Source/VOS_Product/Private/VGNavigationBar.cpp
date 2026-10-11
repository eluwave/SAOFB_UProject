#include "VGNavigationBar.h"

UVGNavigationBar::UVGNavigationBar() {
    this->m_show_help_message = false;
    this->m_gv_panel = NULL;
    this->m_navi_item_table = NULL;
}

void UVGNavigationBar::ShowHelpMessage(bool bShow) {
}

void UVGNavigationBar::SetHelpMessage(FText str) {
}

void UVGNavigationBar::RemoveItem(FName Key) {
}

void UVGNavigationBar::RemoveAllItems() {
}

bool UVGNavigationBar::IsShowHelpMessage() const {
    return false;
}

FText UVGNavigationBar::GetHelpMessage() const {
    return FText::GetEmpty();
}

void UVGNavigationBar::ClearText() {
}

void UVGNavigationBar::AddItemByKey(FName Key, int32 pri, bool grayed) {
}

