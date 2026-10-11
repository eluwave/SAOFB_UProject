#include "VGGameEventDefenceEvent.h"

UVGGameEventDefenceEvent::UVGGameEventDefenceEvent() {
    this->m_launch_sequence = EVGDefenceSequence::StartOpeningEvent;
    this->m_end_sequence = EVGDefenceSequence::EndOpeningEvent;
}

