#include "VGGameEventSummonGateLocator.h"
#include "VGVfxComponent.h"

AVGGameEventSummonGateLocator::AVGGameEventSummonGateLocator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = false;
    this->m_hologram_end_signal = NULL;
    this->m_summon_time = 0.50f;
    this->m_is_broken = false;
    this->m_check_interval = 15;
    this->m_event = NULL;
    this->m_vfx_component = CreateDefaultSubobject<UVGVfxComponent>(TEXT("VFXComponent"));
}

void AVGGameEventSummonGateLocator::ShowSummonMonster() {
}

void AVGGameEventSummonGateLocator::HideSummonMonster() {
}

