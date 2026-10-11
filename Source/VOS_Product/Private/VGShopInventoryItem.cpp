#include "VGShopInventoryItem.h"

FVGShopInventoryItem::FVGShopInventoryItem() {
    this->item_type = EVGShopItem::Item;
    this->item_value = 0.00f;
    this->stock = 0;
    this->is_new = false;
    this->attribute = 0;
    this->src_storage = EVGInventoryStorageId::Global;
}

