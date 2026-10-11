#include "VGANCameraShake.h"

UVGANCameraShake::UVGANCameraShake() {
    this->shake = NULL;
    this->inner_radius = 0.00f;
    this->outer_radius = 0.00f;
    this->falloff = 0.00f;
    this->is_local_user = false;
}

