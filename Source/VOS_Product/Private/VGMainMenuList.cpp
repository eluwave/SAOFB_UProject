#include "VGMainMenuList.h"

UVGMainMenuList::UVGMainMenuList() {
    this->m_leave_in_order = true;
    this->m_leave_time = 0.00f;
    this->m_gv_main_list = NULL;
    this->m_list_bottom = NULL;
}

void UVGMainMenuList::SetItem(const FVGGridItem& Item, int32 index, int32 sub_index) {
}

void UVGMainMenuList::SelectIndex(int32 index, int32 sub_index, bool isForce) {
}

void UVGMainMenuList::OpenWithParam(const TArray<FText>& text_list, int32 select_index, TArray<int32>& param00, TArray<int32>& param01) {
}

void UVGMainMenuList::OpenWithGridItem(const TArray<FVGGridItem>& grid_item, int32 select_index) {
}

void UVGMainMenuList::Open(const TArray<FText>& text_list, int32 select_index) {
}

bool UVGMainMenuList::IsClose() {
    return false;
}

bool UVGMainMenuList::GetItem(FVGGridItem& Item, int32 index, int32 sub_index) const {
    return false;
}

UVGGridViewItem* UVGMainMenuList::GetGridViewItem(int32 index, int32 sub_index) const {
    return NULL;
}

void UVGMainMenuList::Decide(int32 in_index) {
}

void UVGMainMenuList::Close() {
}

void UVGMainMenuList::Cancel() {
}

