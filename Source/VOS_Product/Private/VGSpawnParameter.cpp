#include "VGSpawnParameter.h"

FVGSpawnParameter::FVGSpawnParameter() {
    this->is_move_actor = false;
    this->is_relative_to_owner = false;
    this->is_check_wall = false;
    this->spawned_enemy_action_id = 0;
    this->spawn_max_num = 0;
    this->is_hate_copy = false;
    this->only_one_chara_for_spawner = false;
    this->spawn_time = 0.00f;
}

