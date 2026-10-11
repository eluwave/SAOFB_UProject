#include "VGDialog.h"
#include "Templates/SubclassOf.h"

UVGDialog::UVGDialog() {
    this->UISoundSheet = NULL;
    this->m_gv_buttons = NULL;
}

void UVGDialog::SetModal(bool value) {
}

void UVGDialog::SetCurSel(int32 index) {
}

void UVGDialog::SetCancellable(bool value) {
}

void UVGDialog::SetBody(FText Body) {
}

void UVGDialog::SetAutoClose(float Time) {
}

UVGDialog* UVGDialog::OpenLoadingDialog(UObject* WorldContextObject, FText Body, FText Caption, EVGDialogButtonStyle::Type Style, int32 DefaultIndex, int32 ZOrder) {
    return NULL;
}

UVGDialog* UVGDialog::OpenDialogEx(UObject* WorldContextObject, TSubclassOf<UVGDialog> cls, FText Body, FText Caption, EVGDialogButtonStyle::Type Style, int32 DefaultIndex, int32 ZOrder) {
    return NULL;
}

UVGDialog* UVGDialog::OpenDialog(UObject* WorldContextObject, FText Body, FText Caption, EVGDialogButtonStyle::Type Style, int32 DefaultIndex, int32 ZOrder) {
    return NULL;
}

void UVGDialog::Open(FText Body, FText Caption, const TArray<TEnumAsByte<EVGDialogButton::Type>>& buttons, int32 DefaultIndex, int32 ZOrder) {
}

bool UVGDialog::IsClose() const {
    return false;
}

int32 UVGDialog::GetCurSel() const {
    return 0;
}

FText UVGDialog::GetCaption() const {
    return FText::GetEmpty();
}

FText UVGDialog::GetBody() const {
    return FText::GetEmpty();
}

void UVGDialog::Close() {
}

