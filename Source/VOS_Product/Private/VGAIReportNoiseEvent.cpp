#include "VGAIReportNoiseEvent.h"

FVGAIReportNoiseEvent::FVGAIReportNoiseEvent() {
    this->Type = (EVGAINoiseType)0;
    this->Loudness = 0.00f;
    this->max_range = 0.00f;
}

