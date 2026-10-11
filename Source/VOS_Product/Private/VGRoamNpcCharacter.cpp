#include "VGRoamNpcCharacter.h"

AVGRoamNpcCharacter::AVGRoamNpcCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_anim_sequence_walk_lobby_assets = NULL;
    this->m_anim_sequence_walk_middle_assets = NULL;
    this->m_anim_sequence_wait_assets = NULL;
    this->m_route_move_speed = 150.00f;
    this->m_player_look_range = 1500.00f;
    this->m_player_look_angle = 90.00f;
    this->m_player_look_speed = 0.30f;
    this->m_vfx_spawn = NULL;
    this->m_vfx_goal = NULL;
    this->m_start_id = 0;
    this->m_now_point = 0;
    this->m_next_point = 0;
    this->m_roam_manager = NULL;
    this->m_talk_event = NULL;
}

