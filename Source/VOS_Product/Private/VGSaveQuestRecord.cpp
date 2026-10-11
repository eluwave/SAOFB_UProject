#include "VGSaveQuestRecord.h"

FVGSaveQuestRecord::FVGSaveQuestRecord() {
    this->uid = 0;
    this->register_time = 0;
    this->start_time = 0;
    this->end_time = 0;
    this->State = EVGQuestState::Wanted;
    this->is_new = false;
    this->is_track = false;
    this->current_group = 0;
}

