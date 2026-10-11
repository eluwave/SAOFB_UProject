#include "VGWidget.h"

UVGWidget::UVGWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->IsFocusable = true;
    this->m_input_mask = 0;
    this->m_use_initial_animation = false;
    this->m_enable_se = true;
}

bool UVGWidget::Transition(FName State) {
    return false;
}

FLinearColor UVGWidget::StringToLinearColor(const FString& str) {
    return FLinearColor{};
}

void UVGWidget::StopAnim(FName group) {
}

void UVGWidget::StopAllAnim() {
}

void UVGWidget::ShowWidget(bool withAnimation) {
}

void UVGWidget::SetStaging(bool value) {
}

void UVGWidget::SetResponse(const FString& res, int32 value) {
}

void UVGWidget::SetParameter(FName Key, const FString& value) {
}

void UVGWidget::SetOverrideSE(EVGWidgetSound::Type Type, const FVGWidgetSoundRecord& record) {
}

void UVGWidget::SetIntParameter(FName Key, int32 value) {
}

void UVGWidget::SetFloatParameter(FName Key, float value) {
}

void UVGWidget::SetBoolParameter(FName Key, bool value) {
}

void UVGWidget::RequestWaitParameter(UVGWidget* Widget, FName Key, int32 phase) {
}

void UVGWidget::RequestTransition(UVGWidget* Widget, FName State, int32 phase) {
}

void UVGWidget::RequestAnimation(FName group, UWidgetAnimation* InAnimation, int32 NumLoopsToPlay, int32 phase) {
}

void UVGWidget::RemoveParameter(FName Key) {
}

void UVGWidget::RemoveAllParameters() {
}

void UVGWidget::PlaySE(EVGWidgetSound::Type Type) {
}

void UVGWidget::PlayNewAnim(FName group, UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, EUMGSequencePlayMode::Type PlayMode, const FString& tag) {
}

void UVGWidget::PlayAnim(FName group, UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, EUMGSequencePlayMode::Type PlayMode, const FString& tag) {
}

void UVGWidget::OnOpenWidget_Implementation() {
}

void UVGWidget::OnInputDeviceChanged_Implementation() {
}

void UVGWidget::OnEndTransition_Implementation(FName State) {
}

void UVGWidget::OnCloseWidget_Implementation() {
}

void UVGWidget::OnBeginTransition_Implementation(FName State) {
}

void UVGWidget::MonitorInputDevice() {
}

bool UVGWidget::IsTransition() const {
    return false;
}

bool UVGWidget::IsStaging() const {
    return false;
}

bool UVGWidget::IsPlayAnim() const {
    return false;
}

void UVGWidget::HideWidget(bool withAnimation) {
}

UTexture2D* UVGWidget::GetTextureParameter(FName Key) const {
    return NULL;
}

FVGTextSymbol UVGWidget::GetTextSymbolParameter(FName Key) const {
    return FVGTextSymbol{};
}

FString UVGWidget::GetParameter(FName Key) const {
    return TEXT("");
}

FText UVGWidget::GetLocTextParameter(FName Key) const {
    return FText::GetEmpty();
}

int32 UVGWidget::GetIntParameter(FName Key) const {
    return 0;
}

float UVGWidget::GetFloatParameter(FName Key) const {
    return 0.0f;
}

FString UVGWidget::GetCurrentAnimTag(FName group) const {
    return TEXT("");
}

FLinearColor UVGWidget::GetColorParameter(FName Key) const {
    return FLinearColor{};
}

bool UVGWidget::GetBoolParameter(FName Key) const {
    return false;
}

void UVGWidget::FinishShowWidget() {
}

void UVGWidget::FinishHideWidget() {
}

FSlateBrush UVGWidget::FindUIKeyImage(FName ID, bool isUI) const {
    return FSlateBrush{};
}

bool UVGWidget::ExistAnimRequest(FName group) const {
    return false;
}

void UVGWidget::EvaluateItemParameters() {
}

void UVGWidget::EnableSE(bool isEnable) {
}

void UVGWidget::EnableInteract(bool isEnable) {
}

bool UVGWidget::ContainsParameter(FName Key) const {
    return false;
}

void UVGWidget::ClearAnimRequest(FName group) {
}

bool UVGWidget::CanInteract() const {
    return false;
}

