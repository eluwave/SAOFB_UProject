#include "VGGridViewBase.h"

UVGGridViewBase::UVGGridViewBase() {
    this->m_item_class = NULL;
    this->m_cursor_class = NULL;
    this->m_is_focusable = true;
    this->m_use_smooth_scroll = false;
    this->m_input_mask = 0;
    this->m_use_cached_item = true;
    this->m_panel = NULL;
    this->m_selected_item = NULL;
    this->m_cursor = NULL;
    this->m_into_scroll_widget = NULL;
}

void UVGGridViewBase::SetItemValue(int32 index, int32 sub_index, const FString& value) {
}

void UVGGridViewBase::SetItemTag(int32 index, int32 sub_index, const FString& tag) {
}

void UVGGridViewBase::SetItems(const TArray<FVGGridItem>& Items) {
}

void UVGGridViewBase::SetItemParameter(int32 index, int32 sub_index, FName Key, const FString& value) {
}

void UVGGridViewBase::SetItemCheckedState(int32 index, int32 sub_index, ECheckBoxState State) {
}

void UVGGridViewBase::SetItem(const FVGGridItem& Item, int32 index, int32 sub_index, bool appendParam) {
}

void UVGGridViewBase::SetCurrentItemParameter(FName Key, const FString& value) {
}

void UVGGridViewBase::SetAllItemParameter(FName Key, const FString& value) {
}

void UVGGridViewBase::SelectIndex(int32 index, int32 sub_index, bool isForce) {
}

void UVGGridViewBase::ScrollItemIntoView(UVGGridViewItem* Item) {
}

void UVGGridViewBase::RemoveItem(int32 index, int32 sub_index) {
}

void UVGGridViewBase::RemoveAllItems() {
}

void UVGGridViewBase::RemoveAllItemParameter(FName Key) {
}

void UVGGridViewBase::PutItems(const TArray<FVGGridItem>& Items) {
}

bool UVGGridViewBase::MoveIndex(int32 value, int32 subValue, bool loop) {
    return false;
}

void UVGGridViewBase::ItemParameterChangedHandler(FName Key, const FString& value, UVGGridViewItem* payload) {
}

void UVGGridViewBase::ItemFocusedHandler(UVGGridViewItem* payload) {
}

void UVGGridViewBase::ItemEditModeChangedHandler(bool mode, EVGGridEditReason Reason, UVGGridViewItem* payload) {
}

void UVGGridViewBase::ItemDecideFailedHandler(UVGGridViewItem* payload) {
}

void UVGGridViewBase::ItemDecidedHandler(UVGGridViewItem* payload) {
}

void UVGGridViewBase::ItemCheckStateChangedHandler(ECheckBoxState State, UVGGridViewItem* payload) {
}

int32 UVGGridViewBase::GetSelectedRow() const {
    return 0;
}

int32 UVGGridViewBase::GetSelectedIndex() const {
    return 0;
}

int32 UVGGridViewBase::GetSelectedColumn() const {
    return 0;
}

FString UVGGridViewBase::GetItemValue(int32 index, int32 sub_index) const {
    return TEXT("");
}

FString UVGGridViewBase::GetItemTag(int32 index, int32 sub_index) const {
    return TEXT("");
}

FString UVGGridViewBase::GetItemParameter(int32 index, int32 sub_index, FName Key) const {
    return TEXT("");
}

int32 UVGGridViewBase::GetItemCount() const {
    return 0;
}

bool UVGGridViewBase::GetItem(FVGGridItem& Item, int32 index, int32 sub_index) const {
    return false;
}

UVGGridViewItem* UVGGridViewBase::GetGridViewItem(int32 index, int32 sub_index) const {
    return NULL;
}

UVGWidget* UVGGridViewBase::GetCursor() const {
    return NULL;
}

bool UVGGridViewBase::ContainsItemParameter(int32 index, int32 sub_index, FName Key) const {
    return false;
}

bool UVGGridViewBase::ContainsAllItemParameter(FName Key) {
    return false;
}

void UVGGridViewBase::AddItems(const TArray<FVGGridItem>& Items) {
}

void UVGGridViewBase::AddItem(const FVGGridItem& Item) {
}

UPanelSlot* UVGGridViewBase::AddChildWidget(UWidget* Widget) {
    return NULL;
}

