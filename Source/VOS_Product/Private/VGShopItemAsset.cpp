#include "VGShopItemAsset.h"

FVGShopItemAsset::FVGShopItemAsset() {
    this->item_type = EVGShopItem::Item;
    this->item_value = 0.00f;
    this->stock = 0;
    this->Intensity = 0;
    this->attribute = 0;
    this->progress_id = 0;
}

