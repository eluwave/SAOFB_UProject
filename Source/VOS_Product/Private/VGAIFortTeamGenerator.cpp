#include "VGAIFortTeamGenerator.h"
#include "VGVfxComponent.h"

AVGAIFortTeamGenerator::AVGAIFortTeamGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_vfx_component = CreateDefaultSubobject<UVGVfxComponent>(TEXT("VFXComponent"));
}

