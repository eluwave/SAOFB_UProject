#include "VGGameEventStepSequenceSoundEntry.h"

FVGGameEventStepSequenceSoundEntry::FVGGameEventStepSequenceSoundEntry() {
    this->Delay = 0.00f;
    this->delay_cancel_on_message_feed = false;
    this->play_on_delay_cancel = false;
    this->play_on_skip = false;
}

