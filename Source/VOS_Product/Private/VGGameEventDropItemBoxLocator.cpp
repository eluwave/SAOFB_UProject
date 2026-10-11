#include "VGGameEventDropItemBoxLocator.h"

AVGGameEventDropItemBoxLocator::AVGGameEventDropItemBoxLocator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = false;
    this->item_drop_table = NULL;
    this->is_refill_enabled = false;
    this->refill_interval = 10.00f;
    this->discovered = false;
    this->offset_z = 100.00f;
}

bool AVGGameEventDropItemBoxLocator::IsEnabled_Implementation() const {
    return false;
}

