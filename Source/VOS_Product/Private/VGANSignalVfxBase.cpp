#include "VGANSignalVfxBase.h"

UVGANSignalVfxBase::UVGANSignalVfxBase() {
    this->emit_owner_type = EVGANVfxOwnerType::Actor;
    this->is_system_cancelable = true;
    this->is_affected_mesh_scale = true;
    this->is_left_side_weapon = false;
}

