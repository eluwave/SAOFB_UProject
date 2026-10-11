#include "VGSaveShopInventoryItem.h"

FVGSaveShopInventoryItem::FVGSaveShopInventoryItem() {
    this->item_type = EVGShopItem::Item;
    this->item_entry_id = 0;
    this->item_value = 0.00f;
    this->stock = 0;
    this->is_new = false;
    this->attribute = 0;
}

