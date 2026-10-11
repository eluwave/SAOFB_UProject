#include "VGAISenseConfig_Optical.h"
#include "VGAISense_Optical.h"

UVGAISenseConfig_Optical::UVGAISenseConfig_Optical() {
    this->Implementation = UVGAISense_Optical::StaticClass();
    this->HearingRange = 3000.00f;
    this->LoSHearingRange = 0.00f;
    this->bUseLoSHearing = false;
    this->bIgnoreLoudness = false;
}

