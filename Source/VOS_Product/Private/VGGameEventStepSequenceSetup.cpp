#include "VGGameEventStepSequenceSetup.h"

FVGGameEventStepSequenceSetup::FVGGameEventStepSequenceSetup() {
    this->is_camera_control_required = false;
    this->is_save_required = false;
    this->is_skip_fade_disabled = false;
    this->is_ambient_sound_mute_required = false;
    this->is_event_bgm_keep_required = false;
    this->keep_bgm_cue_id = 0;
    this->is_ai_deactivation_keep_required = false;
    this->emotion_pack = NULL;
}

