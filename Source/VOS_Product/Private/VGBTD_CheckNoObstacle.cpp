#include "VGBTD_CheckNoObstacle.h"

UVGBTD_CheckNoObstacle::UVGBTD_CheckNoObstacle() {
    this->NodeName = TEXT("VGBTD CheckNoObstacle");
    this->m_target = EVGBTObstacleTargetType::None;
    this->m_target_aim_index = 0;
    this->m_angle = 0.00f;
    this->m_range = 0.00f;
    this->m_is_height_check = false;
    this->m_draw_line = false;
    this->m_is_offset_rot = false;
    this->m_channel = EVGCheckObstacleChannel::Weapon;
}

