#include "VGHitBox.h"
#include "Components/ArrowComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "VGVfxComponent.h"

AVGHitBox::AVGHitBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Root"));
    this->m_sphere_component = CreateDefaultSubobject<USphereComponent>(TEXT("HitSphereComponent"));
    this->m_capsule_component = CreateDefaultSubobject<UCapsuleComponent>(TEXT("HitCapsuleComponent"));
    this->is_favor_capsule = false;
    this->m_life_span = -1.00f;
    this->m_is_destroy_initial_effects = false;
    this->m_is_random_rotate_initial_effects = false;
    this->m_is_destroy_initial_se = false;
    this->m_nav_obstacle = false;
    this->m_vfx_component = CreateDefaultSubobject<UVGVfxComponent>(TEXT("VFXComponent"));
    this->m_capsule_component->SetupAttachment(RootComponent);
    this->m_sphere_component->SetupAttachment(RootComponent);
}

void AVGHitBox::Initialize() {
}

