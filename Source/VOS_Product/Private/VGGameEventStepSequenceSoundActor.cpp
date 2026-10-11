#include "VGGameEventStepSequenceSoundActor.h"
#include "VGSoundComponent.h"

AVGGameEventStepSequenceSoundActor::AVGGameEventStepSequenceSoundActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_sound_component = CreateDefaultSubobject<UVGSoundComponent>(TEXT("Sound"));
    this->m_se_cue_sheet = NULL;
    this->m_voice_cue_sheet = NULL;
    this->m_afasys_voice_cue_sheet = NULL;
    this->m_lip_data = NULL;
    this->m_afasys_lip_data = NULL;
}

void AVGGameEventStepSequenceSoundActor::onAssetLoaded() {
}

