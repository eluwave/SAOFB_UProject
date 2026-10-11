#include "VGGadgetExplodeArea.h"

AVGGadgetExplodeArea::AVGGadgetExplodeArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_hit_own = false;
    this->m_life_time = 0.10f;
}

bool AVGGadgetExplodeArea::FindAttr(const TArray<EVGDamageAttr>& attr_array, EVGDamageAttr attr) const {
    return false;
}

