#include "VGGridViewItem.h"

UVGGridViewItem::UVGGridViewItem() {
    this->Visibility = ESlateVisibility::Visible;
    this->m_action_mode = EVGGridViewAction::Normal;
    this->m_is_capture_editing = true;
    this->m_editing_widget = NULL;
}

void UVGGridViewItem::SetGridItemParam(const FVGGridItem& Item, FName Key, const FString& value, FVGGridItem& OutVal) {
}

void UVGGridViewItem::SetCheckedState(ECheckBoxState State) {
}

bool UVGGridViewItem::OnIsEditable_Implementation() const {
    return false;
}

bool UVGGridViewItem::IsSelected() const {
    return false;
}

bool UVGGridViewItem::IsHidden() const {
    return false;
}

bool UVGGridViewItem::IsForbidden() const {
    return false;
}

bool UVGGridViewItem::IsEditing() const {
    return false;
}

bool UVGGridViewItem::IsEditable() const {
    return false;
}

FString UVGGridViewItem::GetValue() const {
    return TEXT("");
}

FString UVGGridViewItem::GetTag() const {
    return TEXT("");
}

int32 UVGGridViewItem::GetSubIndex() const {
    return 0;
}

ESlateVisibility UVGGridViewItem::GetSelectedVisibility() const {
    return ESlateVisibility::Visible;
}

UVGGridViewBase* UVGGridViewItem::GetOwnerView() const {
    return NULL;
}

int32 UVGGridViewItem::GetIndex() const {
    return 0;
}

FString UVGGridViewItem::GetGridItemParam(const FVGGridItem& Item, FName Key) {
    return TEXT("");
}

ECheckBoxState UVGGridViewItem::GetCheckedState() const {
    return ECheckBoxState::Unchecked;
}

void UVGGridViewItem::ChangeEditMode(bool mode, EVGGridEditReason Reason) {
}

