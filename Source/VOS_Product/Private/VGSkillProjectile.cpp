#include "VGSkillProjectile.h"
#include "VGSkillProjectileDescComponent.h"

AVGSkillProjectile::AVGSkillProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_skill_desc = CreateDefaultSubobject<UVGSkillProjectileDescComponent>(TEXT("SkillDesc"));
}

