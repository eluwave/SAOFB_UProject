#include "VGItemDropTableElement.h"

FVGItemDropTableElement::FVGItemDropTableElement() {
    this->difficulty = EVGGameDifficulty::Easy;
    this->item_drop_table = NULL;
    this->rarity_table = NULL;
    this->effect_max_factor = 0.00f;
}

