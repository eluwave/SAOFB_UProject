#include "VGDropItemManager.h"

AVGDropItemManager::AVGDropItemManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_max_drop_num = 50;
    this->m_pickup_radius = 300.00f;
}

void AVGDropItemManager::SetVisible(bool flag) {
}

void AVGDropItemManager::PickupDropItem(AVGDropItem* DropItem, AVGPlayer* Player) {
}

void AVGDropItemManager::GetRarityColor(EVGItemRarity rarity, FLinearColor& Color) const {
}

bool AVGDropItemManager::CheckUnreachedLocation(AVGDropItem* DropItem, const FVector& Position) {
    return false;
}

