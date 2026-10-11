#include "VGANVfxSignalSetting.h"

FVGANVfxSignalSetting::FVGANVfxSignalSetting() {
    this->Asset = NULL;
    this->emit_owner_type = EVGANVfxOwnerType::Actor;
    this->is_system_cancelable = false;
    this->is_affected_mesh_scale = false;
}

