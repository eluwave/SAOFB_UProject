#include "VGANSCharaRim.h"

UVGANSCharaRim::UVGANSCharaRim() {
    this->is_chara = true;
    this->is_weapon = true;
    this->is_left_side_weapon = false;
    this->rim_multi = 5.00f;
    this->rim_sub = 0.00f;
    this->brush_multi = 5.00f;
    this->brush_sub = 0.00f;
    this->main_priority = EVGMaterialPriority::Action;
    this->sub_priority = 0;
    this->use_local_work = false;
}

