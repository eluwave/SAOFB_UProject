#include "VGSkillProjectileActor.h"
#include "VGSkillProjectileDescComponent.h"

AVGSkillProjectileActor::AVGSkillProjectileActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_skill_desc = CreateDefaultSubobject<UVGSkillProjectileDescComponent>(TEXT("SkillDesc"));
}

