#include "VGMapWidget.h"

UVGMapWidget::UVGMapWidget() {
    this->m_map_setting = NULL;
    this->m_map_fixed_obj_setting = NULL;
    this->m_map_game_event_setting = NULL;
    this->m_map_game_quest_setting = NULL;
    this->m_map_icon_setting = NULL;
    this->m_map_icon_class = NULL;
    this->m_name_plate_class = NULL;
    this->m_map_data = NULL;
    this->m_location_data = NULL;
    this->m_fast_travel_areas = NULL;
    this->m_event_icon_change_time = 0.00f;
    this->m_map_image = NULL;
    this->m_map_base = NULL;
    this->m_under_icon_panel = NULL;
    this->m_map_mask_box = NULL;
    this->m_scroll_base = NULL;
    this->m_travel_list = NULL;
    this->m_map_list = NULL;
    this->m_navigation_bar = NULL;
    this->m_dialog = NULL;
    this->m_travel_dialog = NULL;
    this->m_request_map_texture = NULL;
    this->m_mask_texture = NULL;
    this->m_fast_travel_is_valid = true;
}

void UVGMapWidget::Open() {
}

bool UVGMapWidget::IsClose() {
    return false;
}

void UVGMapWidget::Decide(int32 in_index) {
}

void UVGMapWidget::Close(int32 index) {
}

void UVGMapWidget::Cancel() {
}

