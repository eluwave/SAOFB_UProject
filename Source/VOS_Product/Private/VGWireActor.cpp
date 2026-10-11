#include "VGWireActor.h"
#include "Components/SceneComponent.h"
#include "VGSkeletalMeshComponent.h"

AVGWireActor::AVGWireActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->m_gun_mesh = CreateDefaultSubobject<UVGSkeletalMeshComponent>(TEXT("WireMesh"));
    this->m_projectile_class = NULL;
    this->m_line_particle = NULL;
    this->k_fire_socket = TEXT("b_C_Pelvis");
    this->k_max_range = 2500.00f;
    this->m_wire = NULL;
    this->m_line = NULL;
    this->m_gun_mesh->SetupAttachment(RootComponent);
}

