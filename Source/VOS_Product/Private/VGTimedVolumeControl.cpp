#include "VGTimedVolumeControl.h"

FVGTimedVolumeControl::FVGTimedVolumeControl() {
    this->Category = 0;
    this->DesiredVolume = 0.00f;
    this->Duration = 0.00f;
    this->progress = 0.00f;
    this->OriginalVolume = 0.00f;
    this->bHasExpired = false;
}

