#include "VGSavePlayRecordChunk.h"

FVGSavePlayRecordChunk::FVGSavePlayRecordChunk() {
    this->play_time = 0.00f;
    this->reward_point = 0;
    this->reward_received_point = 0;
    this->status_customize_slot_index = 0;
    this->hero_impersonator_setting = EVGHeroImpersonatorCharacter::None;
    this->legendary_accessory_drop_time = 0.00f;
    this->all_slot_lock_and_attack_specialized_time = 0.00f;
    this->special_effect_normalized_time = 0.00f;
}

