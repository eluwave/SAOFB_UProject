#include "VGSaveSlotInfoBlock.h"

FVGSaveSlotInfoBlock::FVGSaveSlotInfoBlock() {
    this->is_empty = false;
    this->player_level = 0;
    this->has_game_completed = false;
    this->play_mode = EVGGamePlayMode::Player;
    this->is_kirito_mode_enabled = false;
    this->kirito_level = 0;
    this->is_afasys_enabled = false;
    this->is_takeover_play = false;
    this->is_abyss_dungeon_mode = false;
}

