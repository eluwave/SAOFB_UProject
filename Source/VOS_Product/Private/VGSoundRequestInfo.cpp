#include "VGSoundRequestInfo.h"

FVGSoundRequestInfo::FVGSoundRequestInfo() {
    this->Owner = NULL;
    this->ComponentIndex = 0;
    this->AttachComponent = NULL;
    this->bPositionSound = false;
    this->bForce = false;
    this->bForceSystemPlay = false;
    this->bAutoDestroy = false;
}

