#include "VGHitEffect.h"

FVGHitEffect::FVGHitEffect() {
    this->Type = EVGHitType::Invalid;
    this->Asset = NULL;
    this->is_move_directivity = false;
    this->is_ignore_rotation = false;
    this->is_affected_mesh_scale = false;
}

