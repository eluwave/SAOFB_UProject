#include "VGDropItem.h"

AVGDropItem::AVGDropItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AVGDropItem::IsUnreachedLocation() const {
    return false;
}

void AVGDropItem::GetSpecialEffectNum(int32& special_effect_num) const {
}

void AVGDropItem::GetRarity(EVGItemRarity& rarity) const {
}

void AVGDropItem::GetItemNum(int32& item_num) const {
}

void AVGDropItem::GetItemName(FName& item_name) const {
}

void AVGDropItem::GetItemId(FName& item_id) const {
}

void AVGDropItem::GetItemData(FVGItemDropItem& itemData) const {
}

