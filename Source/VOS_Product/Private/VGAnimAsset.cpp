#include "VGAnimAsset.h"

FVGAnimAsset::FVGAnimAsset() {
    this->Animation = NULL;
    this->is_loop = false;
    this->blend_time = 0.00f;
    this->blend_config_id = 0;
    this->blend_space_param_x = EVGBlendParam::None;
    this->blend_space_param_y = EVGBlendParam::None;
}

