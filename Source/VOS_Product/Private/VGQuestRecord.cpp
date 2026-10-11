#include "VGQuestRecord.h"

UVGQuestRecord::UVGQuestRecord() {
    this->uid = 0;
    this->register_time = 0;
    this->start_time = 0;
    this->end_time = 0;
    this->State = EVGQuestState::Wanted;
    this->current_group = -1;
    this->m_is_new = false;
    this->m_is_track = false;
    this->m_ignore_notify = false;
}

void UVGQuestRecord::IgnoreNotify(bool value) {
}

EVGQuestState::Type UVGQuestRecord::GetState() const {
    return EVGQuestState::Wanted;
}

