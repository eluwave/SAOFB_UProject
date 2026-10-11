#include "VGMedalShopWidget.h"

UVGMedalShopWidget::UVGMedalShopWidget() {
    this->m_use_item_preview = false;
    this->m_tv_items = NULL;
    this->m_ws_details = NULL;
    this->m_ui_details = NULL;
    this->m_inventory = NULL;
}

bool UVGMedalShopWidget::CanPreviewItem() const {
    return false;
}

