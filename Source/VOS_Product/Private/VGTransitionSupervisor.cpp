#include "VGTransitionSupervisor.h"

AVGTransitionSupervisor::AVGTransitionSupervisor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const UProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->m_desc_decorator = NULL;
}

void AVGTransitionSupervisor::RequestTransition(const FVGTransitionDescBP& desc) {
}

void AVGTransitionSupervisor::onFadeEnd() {
}

void AVGTransitionSupervisor::NetMulticast_ScreenFadeout_Implementation(const FVGScreenFadeParam& param) {
}

