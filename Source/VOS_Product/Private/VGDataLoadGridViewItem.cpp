#include "VGDataLoadGridViewItem.h"

UVGDataLoadGridViewItem::UVGDataLoadGridViewItem() {
    this->m_enable = false;
    this->m_index = 0;
    this->m_clear = false;
    this->m_kirito_mode = false;
    this->m_dlc_mode = false;
}

bool UVGDataLoadGridViewItem::EnableDLCMode() {
    return false;
}

