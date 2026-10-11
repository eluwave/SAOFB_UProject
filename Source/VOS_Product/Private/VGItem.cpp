#include "VGItem.h"

FVGItem::FVGItem() {
    this->Category = EVGItemCategory::Weapon;
    this->rarity = EVGItemRarity::Common;
    this->max_possession_amount = 0;
    this->purchase_price = 0;
    this->sell_price = 0;
    this->price_coef = 0.00f;
    this->is_purchasable = false;
    this->is_sellable = false;
    this->is_consumable = false;
    this->is_depositable = false;
    this->generic_param = 0;
}

