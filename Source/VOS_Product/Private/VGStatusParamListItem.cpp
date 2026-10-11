#include "VGStatusParamListItem.h"

UVGStatusParamListItem::UVGStatusParamListItem() {
    this->m_status_value = 0;
    this->m_up_value = 0;
    this->m_up_value_visibility = ESlateVisibility::Visible;
    this->m_is_correction = false;
}

