#include "VGMoviePlayer.h"
#include "VGSoundComponent.h"

AVGMoviePlayer::AVGMoviePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_subtitle = NULL;
    this->m_sound_component = CreateDefaultSubobject<UVGSoundComponent>(TEXT("SoundComponent"));
    this->m_is_request_play = false;
}

void AVGMoviePlayer::Stop() {
}

void AVGMoviePlayer::SetSubtitleDataTable(UDataTable* data_table) {
}

void AVGMoviePlayer::SetSoundCueInfo(USoundAtomCueSheet* cue_sheet, const TArray<FVGSoundCueInfo>& cue_infos) {
}

void AVGMoviePlayer::SetManaTexture(UManaTexture* Texture) {
}

void AVGMoviePlayer::Play() {
}

bool AVGMoviePlayer::IsPlaying() const {
    return false;
}

