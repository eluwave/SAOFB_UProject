#include "VGAfasysShopingItem.h"

FVGAfasysShopingItem::FVGAfasysShopingItem() {
    this->item_type = EVGAfasysMenuPriorityItem::Weapon;
    this->amount = 0;
    this->bonus_add_amount = 0;
    this->enable_progress = 0;
    this->disable_progress = 0;
    this->is_miser = false;
    this->is_normal = false;
    this->is_waste = false;
}

