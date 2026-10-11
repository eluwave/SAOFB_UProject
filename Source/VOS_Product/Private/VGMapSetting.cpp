#include "VGMapSetting.h"

UVGMapSetting::UVGMapSetting() {
    this->use_mask = false;
    this->mask_open_radius = 2000.00f;
    this->world_width = 100000.00f;
    this->initial_zoom_rate = 2.00f;
    this->zoom_rate_min = 1.00f;
    this->zoom_rate_max = 5.00f;
    this->normal_range = 5000.00f;
    this->long_range = 10000.00f;
    this->height_range = 2000.00f;
    this->height_range_limit = 4000.00f;
}

