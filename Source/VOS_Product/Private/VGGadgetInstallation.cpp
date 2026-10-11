#include "VGGadgetInstallation.h"
#include "Net/UnrealNetwork.h"
#include "VGVfxComponent.h"

AVGGadgetInstallation::AVGGadgetInstallation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const UProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bCanBeInCluster = false;
    this->m_skill_header = NULL;
    this->m_life_span = 1.00f;
    this->m_owner_id = -1;
    this->m_vfx_component = CreateDefaultSubobject<UVGVfxComponent>(TEXT("VFXComponent"));
}

void AVGGadgetInstallation::Server_Remove_Implementation() {
}
bool AVGGadgetInstallation::Server_Remove_Validate() {
    return true;
}

void AVGGadgetInstallation::OnRep_OwnerId() {
}

void AVGGadgetInstallation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGGadgetInstallation, m_owner_id);
}

