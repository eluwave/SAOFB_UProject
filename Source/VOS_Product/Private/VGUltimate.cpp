#include "VGUltimate.h"

UVGUltimate::UVGUltimate() {
    this->k_gauge_max = 100.00f;
    this->k_increase = 1.00f;
    this->assault_timer = 0.00f;
    this->sniper_bullet = NULL;
    this->launcher_bullet = NULL;
    this->launcher_bullet_second = NULL;
    this->launcher_bullet_area = NULL;
}

