#include "VGGameEventEnemySpawnParam.h"

FVGGameEventEnemySpawnParam::FVGGameEventEnemySpawnParam() {
    this->suspend_game_on_defeat = false;
    this->team_class = NULL;
    this->team_category = EVGTeamCategory::PLAYER;
}

