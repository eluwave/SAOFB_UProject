#include "VGLevelSequenceActor.h"
#include "VGSoundComponent.h"

AVGLevelSequenceActor::AVGLevelSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_sound_component = CreateDefaultSubobject<UVGSoundComponent>(TEXT("Sound"));
    this->m_sequence = NULL;
    this->m_cue_sheet = NULL;
    this->m_afasys_cue_sheet = NULL;
    this->m_subtitles = NULL;
}

void AVGLevelSequenceActor::onPreloadAssetLoaded() {
}

void AVGLevelSequenceActor::onPlayStopped() {
}

void AVGLevelSequenceActor::onAssetLoaded() {
}

