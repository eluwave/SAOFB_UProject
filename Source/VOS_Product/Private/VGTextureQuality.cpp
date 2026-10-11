#include "VGTextureQuality.h"

FVGTextureQuality::FVGTextureQuality() {
    this->mip_bias = 0.00f;
    this->max_anisotropy = 0;
    this->limit_pool_size_to_vram = false;
    this->pool_size = 0;
}

