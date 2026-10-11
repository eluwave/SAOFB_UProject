#include "VGRoamNpcRoutePoint.h"

AVGRoamNpcRoutePoint::AVGRoamNpcRoutePoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_id = -1;
    this->m_is_spawn = false;
    this->m_is_visible_spawn = false;
    this->m_is_goal = false;
    this->m_wait_time = 0.00f;
    this->m_force_spawn = false;
}

void AVGRoamNpcRoutePoint::DrawText() {
}

void AVGRoamNpcRoutePoint::DrawArrows(bool is_connect_point_update) {
}

