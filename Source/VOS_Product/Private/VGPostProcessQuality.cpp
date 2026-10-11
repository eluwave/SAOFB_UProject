#include "VGPostProcessQuality.h"

FVGPostProcessQuality::FVGPostProcessQuality() {
    this->motion_blur_quality = 0;
    this->ambient_occlusion_mip_level_factor = 0.00f;
    this->ambient_occlusion_max_quality = 0.00f;
    this->ambient_occlusion_mip_levels = 0;
    this->ambient_occlusion_radius_scale = 0.00f;
    this->dof_quality = 0;
    this->render_target_pool_min = 0;
    this->lens_flare_quality = 0;
    this->scene_color_fringe_quality = 0;
    this->eye_adaptation_quality = 0;
    this->bloom_quality = 0;
    this->fast_blur_threshold = 0.00f;
    this->upscale_quality = 0;
    this->tonemap_grain_quantization = 0;
    this->light_shaft_quality = 0;
    this->filter_size_scale = 0.00f;
    this->tonemap_quality = 0;
}

