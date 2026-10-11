#include "VGGameEventStepSequenceSoundParam.h"

FVGGameEventStepSequenceSoundParam::FVGGameEventStepSequenceSoundParam() {
    this->Type = EVGGameEventStepSoundType::Voice;
    this->use_cue_name = false;
    this->cue_id = 0;
    this->Volume = 0.00f;
    this->fade_time = 0.00f;
}

