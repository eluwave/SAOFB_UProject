#include "VGMapSystem.h"

AVGMapSystem::AVGMapSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_map_data = NULL;
    this->m_map_setting = NULL;
    this->m_map_fixed_obj_setting = NULL;
    this->m_map_game_event_setting = NULL;
    this->m_map_game_quest_setting = NULL;
    this->m_map_texture = NULL;
}

