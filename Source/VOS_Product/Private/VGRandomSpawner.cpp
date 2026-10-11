#include "VGRandomSpawner.h"

FVGRandomSpawner::FVGRandomSpawner() {
    this->spawn_enable = 0;
    this->always_spawn = false;
    this->spawn_weight = 0;
    this->max_spawn = 0;
    this->on_team_location = false;
    this->on_team_rotation = false;
}

