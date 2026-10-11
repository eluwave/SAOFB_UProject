#include "VGShadowQuality.h"

FVGShadowQuality::FVGShadowQuality() {
    this->light_func_quality = 0;
    this->shadow_quality = 0;
    this->max_cascades = 0;
    this->max_resolution = 0;
    this->radius_threshold = 0.00f;
    this->distance_scale = 0.00f;
    this->transition_scale = 0.00f;
    this->distance_field_shadowing = false;
    this->distance_field_ao = false;
}

