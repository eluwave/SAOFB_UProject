#include "VGWeaponReinforceWidget.h"

UVGWeaponReinforceWidget::UVGWeaponReinforceWidget() {
    this->m_shop_sort_method_all = 0;
    this->m_shop_sort_method = 0;
    this->m_tv_items = NULL;
    this->m_tv_recipe = NULL;
    this->m_ui_info = NULL;
    this->m_ui_header = NULL;
    this->m_ui_comp = NULL;
    this->m_ui_result = NULL;
    this->m_inventory = NULL;
}

void UVGWeaponReinforceWidget::StringToMaterialGridItems(const FString& value, TArray<FVGGridItem>& OutVal) {
}

