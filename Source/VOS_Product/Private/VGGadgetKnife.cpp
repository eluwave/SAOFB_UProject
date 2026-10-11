#include "VGGadgetKnife.h"

AVGGadgetKnife::AVGGadgetKnife(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_velocity = 0.00f;
    this->m_velocity_limit = 0.00f;
    this->m_acceleration = 0.00f;
    this->m_limit = 5000.00f;
}

bool AVGGadgetKnife::FindAttr(const TArray<EVGDamageAttr>& attr_array, EVGDamageAttr attr) const {
    return false;
}

