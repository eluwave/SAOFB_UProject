#include "VGBulletLineEffect.h"

FVGBulletLineEffect::FVGBulletLineEffect() {
    this->Type = EVGBulletLineType::Normal;
    this->line = NULL;
    this->line_end = NULL;
    this->hit_point = NULL;
}

