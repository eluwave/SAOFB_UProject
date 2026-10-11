#include "VGTabbedListView.h"

UVGTabbedListView::UVGTabbedListView() {
    this->m_item_class = NULL;
    this->m_delay_time = 0.03f;
    this->m_limit_time = 0.10f;
    this->m_wrap_tab = true;
    this->m_use_tableave_anim = false;
    this->m_gv_main = NULL;
    this->m_gv_tab = NULL;
}

void UVGTabbedListView::LeaveTab() {
}

void UVGTabbedListView::LeaveItems() {
}

bool UVGTabbedListView::IsDelayedActions() const {
    return false;
}

bool UVGTabbedListView::IsBusyItem() const {
    return false;
}

int32 UVGTabbedListView::GetTabCount() const {
    return 0;
}

int32 UVGTabbedListView::GetListHeaderCount() const {
    return 0;
}

FText UVGTabbedListView::GetListHeader(int32 index) const {
    return FText::GetEmpty();
}

FText UVGTabbedListView::GetCurrentTabText() const {
    return FText::GetEmpty();
}

int32 UVGTabbedListView::GetCurrentItemCount() const {
    return 0;
}

FText UVGTabbedListView::GetCurrentEmptyText() const {
    return FText::GetEmpty();
}

void UVGTabbedListView::EnterTab() {
}

void UVGTabbedListView::EnterItems() {
}

