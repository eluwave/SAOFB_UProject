#include "VGGameEventStepCommandPlayLevelSequence.h"

FVGGameEventStepCommandPlayLevelSequence::FVGGameEventStepCommandPlayLevelSequence() {
    this->Sequence = NULL;
    this->cue_sheet = NULL;
    this->bgm_fade_duration = 0.00f;
    this->suppress_end_fade = false;
}

