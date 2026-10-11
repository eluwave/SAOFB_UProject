#include "VGWeaponActor.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "VGPassiveSkillComponent.h"
#include "VGSkeletalMeshComponent.h"
#include "VGSoundComponent.h"
#include "VGVfxComponent.h"

AVGWeaponActor::AVGWeaponActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->m_category = EVGWeaponCategory::None;
    this->m_division = EVGWeaponDivision::None;
    this->m_classify = 0;
    this->m_variation = 0;
    this->m_weapon_mesh = CreateDefaultSubobject<UVGSkeletalMeshComponent>(TEXT("WeaponMesh"));
    this->m_particle_system = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
    this->m_se = NULL;
    this->m_projectile_class = NULL;
    this->m_shotgun_pellets = 5;
    this->m_barrel_rotation_speed = 60.00f;
    this->m_passive_skill_component = CreateDefaultSubobject<UVGPassiveSkillComponent>(TEXT("PassiveSkillComponent"));
    this->m_vfx_component = CreateDefaultSubobject<UVGVfxComponent>(TEXT("VFXComponent"));
    this->m_sound_component = CreateDefaultSubobject<UVGSoundComponent>(TEXT("SoundComponent"));
    this->m_bullet = NULL;
    this->m_extra_bullet = NULL;
    this->m_extra_bullet_area = NULL;
    this->m_ultra_assault = NULL;
    this->m_ultra_sniper = NULL;
    this->m_ultra_launcher = NULL;
    this->m_left_actor_component = NULL;
    this->m_particle_system->SetupAttachment(m_weapon_mesh);
    this->m_weapon_mesh->SetupAttachment(RootComponent);
}

int32 AVGWeaponActor::GetVariation() const {
    return 0;
}

EVGWeaponDivision AVGWeaponActor::GetDivision() const {
    return EVGWeaponDivision::HandGun;
}

int32 AVGWeaponActor::GetClassify() const {
    return 0;
}

EVGWeaponCategory AVGWeaponActor::GetCategory() const {
    return EVGWeaponCategory::Melee;
}

float AVGWeaponActor::GetBasePower() const {
    return 0.0f;
}

bool AVGWeaponActor::FindAttr(const TArray<EVGDamageAttr>& attr_array, EVGDamageAttr attr) const {
    return false;
}

