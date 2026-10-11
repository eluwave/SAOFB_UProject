#include "VGSaveGameOptionSettingChunk.h"

FVGSaveGameOptionSettingChunk::FVGSaveGameOptionSettingChunk() {
    this->bgm_volume = 0.00f;
    this->se_volume = 0.00f;
    this->voice_volume = 0.00f;
    this->camera_speed_x = 0.00f;
    this->camera_speed_y = 0.00f;
    this->aim_camera_speed_x = 0.00f;
    this->aim_camera_speed_y = 0.00f;
    this->scope_camera_speed_x = 0.00f;
    this->scope_camera_speed_y = 0.00f;
    this->camera_horizontal = EVGCameraControl::Normal;
    this->camera_vertical = EVGCameraControl::Normal;
    this->controller_type = EVGControllerType::TypeA;
    this->controller_vibration = false;
    this->status_display = false;
    this->status_display_always = false;
    this->friend_status_3d_display = false;
    this->enemy_status_3d_display = false;
    this->gun_sight_display = false;
    this->mini_map_direction_fixed = false;
    this->mini_map_display = false;
    this->mini_map_range = EVGMiniMapRange::Normal;
    this->prise_display = false;
    this->damage_display = false;
    this->log_window_display = false;
    this->screen_brightness = 0.00f;
    this->message_speed = 0.00f;
    this->demo_subtitle_display = false;
    this->difficulty = EVGGameDifficulty::Easy;
    this->send_player_card = false;
    this->receive_player_card = false;
    this->join_afasys = false;
    this->voice_chat = false;
    this->hero_impersonator_setting = EVGHeroImpersonatorCharacter::None;
    this->aim_assist = false;
    this->increase_reputation = false;
}

