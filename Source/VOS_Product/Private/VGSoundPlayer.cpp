#include "VGSoundPlayer.h"
#include "VGSoundComponent.h"

AVGSoundPlayer::AVGSoundPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UVGSoundComponent>(TEXT("SoundComponent"));
    this->SoundComponent = (UVGSoundComponent*)RootComponent;
}

void AVGSoundPlayer::StopSound() {
}

void AVGSoundPlayer::SetCueSheet(EVGSoundAttribute::Type Type, USoundAtomCueSheet* InCueSheet) {
}

void AVGSoundPlayer::SetAutoDestroy(bool inAutoDestroy) {
}

void AVGSoundPlayer::PlaySound(const TArray<FVGSoundCueInfo>& inCueList) {
}

void AVGSoundPlayer::OverrideCueSheets(const FVGOverrideSoundCueSheets inCueSheets) {
}

void AVGSoundPlayer::OnReportPlayEnd(int32 PlayBackId) {
}

bool AVGSoundPlayer::IsPlaying() const {
    return false;
}

void AVGSoundPlayer::CopyCueSheetSetting(const UVGSoundComponent* inComponent) {
}

