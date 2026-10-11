#include "VGMemoryChipChangeWidget.h"

UVGMemoryChipChangeWidget::UVGMemoryChipChangeWidget() {
    this->m_tv_items = NULL;
    this->m_dialog_list = NULL;
    this->m_ui_weapon_comp = NULL;
    this->m_ui_weapon_result = NULL;
    this->m_ui_accessory_comp = NULL;
    this->m_ui_accessory_result1 = NULL;
    this->m_ui_accessory_result2 = NULL;
    this->m_ui_info = NULL;
    this->m_ui_weapon_header = NULL;
    this->m_ui_accessory_header = NULL;
}

EVGItemCategory UVGMemoryChipChangeWidget::GetItemCategory() const {
    return EVGItemCategory::Weapon;
}

