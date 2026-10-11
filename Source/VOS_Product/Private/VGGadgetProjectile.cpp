#include "VGGadgetProjectile.h"
#include "Net/UnrealNetwork.h"
#include "VGVfxComponent.h"

AVGGadgetProjectile::AVGGadgetProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const UProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bCanBeInCluster = false;
    this->bStaticMeshReplicateMovement = true;
    this->m_skill_header = NULL;
    this->m_life_span = 1.00f;
    this->m_hit_life_span = -1.00f;
    this->m_explode_class = NULL;
    this->m_is_sticky = false;
    this->m_radius = 0.00f;
    this->m_action = EVGDodgeAction::None;
    this->m_probability = 100.00f;
    this->m_duration = 0.10f;
    this->m_timing = 0.50f;
    this->m_owner_id = -1;
    this->m_is_life_changed = false;
    this->m_spawn_id = -1;
    this->m_vfx_component = CreateDefaultSubobject<UVGVfxComponent>(TEXT("VFXComponent"));
}

void AVGGadgetProjectile::Server_Throw_Implementation(FVGGadgetThrowPacket packet) {
}
bool AVGGadgetProjectile::Server_Throw_Validate(FVGGadgetThrowPacket packet) {
    return true;
}

void AVGGadgetProjectile::Server_Explode_Implementation() {
}
bool AVGGadgetProjectile::Server_Explode_Validate() {
    return true;
}

void AVGGadgetProjectile::OnRep_OwnerId() {
}

void AVGGadgetProjectile::OnRep_LifeChanged() {
}

void AVGGadgetProjectile::MulticastSimulated_Throw_Implementation() {
}

void AVGGadgetProjectile::MulticastSimulated_State_Implementation(FVGGadgetStatePacket packet) {
}

void AVGGadgetProjectile::MulticastSimulated_Explode_Implementation() {
}

void AVGGadgetProjectile::Multicast_Throw_Implementation() {
}

void AVGGadgetProjectile::Multicast_State_Implementation(FVGGadgetStatePacket packet) {
}

void AVGGadgetProjectile::Multicast_Explode_Implementation() {
}

void AVGGadgetProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGGadgetProjectile, m_owner_id);
    DOREPLIFETIME(AVGGadgetProjectile, m_is_life_changed);
    DOREPLIFETIME(AVGGadgetProjectile, m_spawn_id);
}

