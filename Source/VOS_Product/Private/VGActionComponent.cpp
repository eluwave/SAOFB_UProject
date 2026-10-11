#include "VGActionComponent.h"

UVGActionComponent::UVGActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bAbsoluteLocation = true;
    this->bAbsoluteRotation = true;
    this->bAbsoluteScale = true;
    this->m_actions.AddDefaulted(4);
}

void UVGActionComponent::Server_TriggerAction_Implementation(int32 action_id, float blend_coeff, float play_rate) {
}
bool UVGActionComponent::Server_TriggerAction_Validate(int32 action_id, float blend_coeff, float play_rate) {
    return true;
}

void UVGActionComponent::Server_SetBlendSpaceParam_Implementation(uint8 flag, FVGBlendSpaceParam value) {
}
bool UVGActionComponent::Server_SetBlendSpaceParam_Validate(uint8 flag, FVGBlendSpaceParam value) {
    return true;
}

void UVGActionComponent::Server_SetActionLibrary_Implementation(UVGActionLibrary* action_library, int32 index) {
}
bool UVGActionComponent::Server_SetActionLibrary_Validate(UVGActionLibrary* action_library, int32 index) {
    return true;
}

void UVGActionComponent::ResetAction(int32 action_layer) {
}

void UVGActionComponent::ReserveAction(int32 action_id, float delay_time, float blend_coeff, float play_rate, bool is_local) {
}

void UVGActionComponent::MulticastSimulated_TriggerAction_Implementation(int32 action_id, float blend_coeff, float play_rate) {
}

void UVGActionComponent::MulticastSimulated_SetBlendSpaceParam_Implementation(uint8 flag, FVGBlendSpaceParam value) {
}

void UVGActionComponent::MulticastSimulated_SetActionLibrary_Implementation(UVGActionLibrary* action_library, int32 index) {
}

void UVGActionComponent::Multicast_TriggerAction_Implementation(int32 action_id, float blend_coeff, float play_rate) {
}

void UVGActionComponent::Multicast_SetPermissionBulletLine_Implementation(bool enable) {
}

void UVGActionComponent::Multicast_SetBlendSpaceParam_Implementation(uint8 flag, FVGBlendSpaceParam value) {
}

void UVGActionComponent::Multicast_SetAlertTime_Implementation(float Time) {
}

void UVGActionComponent::Multicast_SetActionLibrary_Implementation(UVGActionLibrary* action_library, int32 index) {
}

bool UVGActionComponent::IsPlayingAction(int32 action_id) const {
    return false;
}

bool UVGActionComponent::HasAnyActionStates(const TArray<EVGActionState> states) const {
    return false;
}

bool UVGActionComponent::HasActionState(EVGActionState State) const {
    return false;
}

