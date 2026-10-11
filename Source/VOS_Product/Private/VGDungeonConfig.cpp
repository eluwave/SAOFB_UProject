#include "VGDungeonConfig.h"

FVGDungeonConfig::FVGDungeonConfig() {
    this->random_seed = 0;
    this->map_size = 0;
    this->block_size = 0.00f;
    this->room_max = 0;
    this->passage_max = 0;
    this->room_size_min = 0;
    this->room_size_max = 0;
    this->boss_room_size_min = 0;
    this->boss_room_size_max = 0;
    this->room_margin = 0;
    this->room_portal_max = 0;
    this->passage_retry_times = 0;
    this->passage_percent = 0;
    this->conquest_mode = false;
    this->warp_to_boss = false;
    this->enemy_spawn_type = EVGDungeonEnemySpawnType::Default;
    this->enemy_erase_type = EVGDungeonEnemyEraseType::Default;
    this->boss_spawn_type = EVGDungeonEnemySpawnType::Default;
    this->boss_erase_type = EVGDungeonEnemyEraseType::Default;
    this->spawn_enemy_team_max = 0;
    this->erase_spawn_boss_team = false;
    this->eqs_global_width = 0.00f;
    this->eqs_local_width = 0.00f;
}

