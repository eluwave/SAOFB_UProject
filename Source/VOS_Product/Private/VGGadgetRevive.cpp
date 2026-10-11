#include "VGGadgetRevive.h"
#include "Components/CapsuleComponent.h"
AVGGadgetRevive::AVGGadgetRevive(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_area_component = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Area"));
    this->m_begin_vfx = NULL;
    this->m_end_vfx = NULL;
}

