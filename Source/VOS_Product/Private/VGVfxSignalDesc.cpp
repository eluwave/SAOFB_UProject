#include "VGVfxSignalDesc.h"

FVGVfxSignalDesc::FVGVfxSignalDesc() {
    this->Asset = NULL;
    this->Owner = NULL;
    this->owner_comp = NULL;
    this->is_system_cancelable = false;
    this->is_absolute_offset = false;
}

