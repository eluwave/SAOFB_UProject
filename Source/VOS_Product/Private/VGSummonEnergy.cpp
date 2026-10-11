#include "VGSummonEnergy.h"

AVGSummonEnergy::AVGSummonEnergy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_gauge_max = 100.00f;
    this->m_spawn_mediator = NULL;
}

