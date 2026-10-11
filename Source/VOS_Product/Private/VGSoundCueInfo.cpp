#include "VGSoundCueInfo.h"

FVGSoundCueInfo::FVGSoundCueInfo() {
    this->SoundType = EVGSoundType::CMN_SYSTEM_SE;
    this->CueID = 0;
    this->BlockIndex = 0;
    this->Volume = 0.00f;
    this->Pitch = 0.00f;
    this->IsStopForChangedAction = false;
    this->IsReportPlayEnd = false;
    this->IsPhysicalSurface = false;
    this->IsPitchChangeByScale = false;
    this->CueSheetIndex = 0;
}

