#include "VGActionEvent.h"

UVGActionEvent::UVGActionEvent() {
    this->is_invalidate = false;
    this->start_frame = 0;
    this->num_frames = 1;
    this->start_time = 0.00f;
    this->end_time = 0.00f;
    this->Priority = 100;
    this->is_ignore_loop = false;
    this->is_loop_event = false;
    this->Notify = NULL;
    this->notify_state = NULL;
}

