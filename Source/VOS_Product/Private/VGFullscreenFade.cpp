#include "VGFullscreenFade.h"

UVGFullscreenFade::UVGFullscreenFade() : UUserWidget(FObjectInitializer::Get()) {
    this->m_border_widget = NULL;
    this->m_loading_widget = NULL;
    this->m_party_widget = NULL;
}

void UVGFullscreenFade::StopLoading() {
}

void UVGFullscreenFade::StartLoading() {
}

void UVGFullscreenFade::StartFadeOut(float Time, FLinearColor EndColor) {
}

void UVGFullscreenFade::StartFadeIn(float Time, FLinearColor EndColor) {
}

void UVGFullscreenFade::OnStartLoading_Implementation() {
}

void UVGFullscreenFade::OnStartFade_Implementation(bool IsFadeOut) {
}

