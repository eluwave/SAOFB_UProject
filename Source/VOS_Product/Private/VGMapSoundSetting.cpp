#include "VGMapSoundSetting.h"

FVGMapSoundSetting::FVGMapSoundSetting() {
    this->mode = EVGMapSoundGameMode::All;
    this->is_use_online = false;
    this->bgm_cue_sheet = NULL;
    this->bgm_cue_id = 0;
    this->battle_bgm_cue_id = 0;
    this->atom_cue_sheet = NULL;
    this->atom_cue_id = 0;
    this->stage_se_cue_sheet = NULL;
    this->reverb_aisac = 0.00f;
    this->reverb_dsp = 0.00f;
}

