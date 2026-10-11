#include "VGSkillBeam.h"
#include "VGSkillProjectileDescComponent.h"

AVGSkillBeam::AVGSkillBeam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_skill_desc = CreateDefaultSubobject<UVGSkillProjectileDescComponent>(TEXT("SkillDesc"));
}

