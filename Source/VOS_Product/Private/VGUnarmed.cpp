#include "VGUnarmed.h"

AVGUnarmed::AVGUnarmed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AVGUnarmed::FindAttr(const TArray<EVGDamageAttr>& attr_array, EVGDamageAttr attr) const {
    return false;
}

