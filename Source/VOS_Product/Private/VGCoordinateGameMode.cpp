#include "VGCoordinateGameMode.h"

AVGCoordinateGameMode::AVGCoordinateGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_coordinate_agent = NULL;
    this->m_avatar = NULL;
    this->m_weapon_actor = NULL;
    this->m_camera = NULL;
}

