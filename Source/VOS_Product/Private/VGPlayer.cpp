#include "VGPlayer.h"
#include "VGPlayerCameraComponent.h"

AVGPlayer::AVGPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UVGPlayerCameraComponent>(TEXT("CameraComponent"))) {
    this->m_assist_mode = EVGAimAssistMode::Auto;
    this->k_camera_aim_assist_correct = 0.65f;
    this->m_aim_accuracy_rate = 0.20f;
    this->m_aim_calm_MIL = 2.00f;
    this->m_aim_calm_rate = 0.20f;
    this->m_aim_manual_coef = 1.00f;
    this->k_aim_check_depth = 40.00f;
    this->m_reticle_scale_per_MIL = 16.00f;
    this->k_input_x_coef = 2.00f;
    this->k_input_x_time = 1.00f;
    this->k_input_curve = NULL;
    this->k_view_blocking_distance = -350.00f;
    this->k_view_blocking_distance_range = -200.00f;
    this->k_reputation_value = 10;
    this->m_wall_hit_vfx = NULL;
    this->m_wire_actor_component = NULL;
    this->m_system_assist = NULL;
    this->m_aim_accuracy = NULL;
    this->m_aim_accuracy_ADS = NULL;
}

void AVGPlayer::WireEnd() {
}

void AVGPlayer::Server_SendWireState_Implementation(FVector_NetQuantize10 fire, FVector_NetQuantize10 head) {
}
bool AVGPlayer::Server_SendWireState_Validate(FVector_NetQuantize10 fire, FVector_NetQuantize10 head) {
    return true;
}

void AVGPlayer::Server_SendWireFire_Implementation(FVector_NetQuantizeNormal Direction) {
}
bool AVGPlayer::Server_SendWireFire_Validate(FVector_NetQuantizeNormal Direction) {
    return true;
}

void AVGPlayer::Server_SendWireEnd_Implementation() {
}
bool AVGPlayer::Server_SendWireEnd_Validate() {
    return true;
}

void AVGPlayer::Server_SendSwitchState_Implementation(int8 ID, bool new_state) {
}
bool AVGPlayer::Server_SendSwitchState_Validate(int8 ID, bool new_state) {
    return true;
}

void AVGPlayer::RequestTeamCommand(EVGTeamCommand Command, bool is_voice) {
}

void AVGPlayer::PullDropItem_Implementation(AVGDropItem* DropItem, AVGPlayer* Player, bool unreached) {
}

void AVGPlayer::MulticastSimulated_SendWireState_Implementation(FVector_NetQuantize10 fire, FVector_NetQuantize10 head) {
}

void AVGPlayer::MulticastSimulated_SendWireFire_Implementation(FVector_NetQuantizeNormal Direction) {
}

void AVGPlayer::MulticastSimulated_SendWireEnd_Implementation() {
}

void AVGPlayer::Multicast_SendWireState_Implementation(FVector_NetQuantize10 fire, FVector_NetQuantize10 head) {
}

void AVGPlayer::Multicast_SendWireFire_Implementation(FVector_NetQuantizeNormal Direction) {
}

void AVGPlayer::Multicast_SendWireEnd_Implementation() {
}

void AVGPlayer::Multicast_SendSwitchState_Implementation(int8 ID, bool new_state) {
}

void AVGPlayer::Multicast_CharacterWarp_Implementation(int8 ID, int32 character_unique_id) {
}

EVGTeamCommand AVGPlayer::GetTeamCommand() {
    return EVGTeamCommand::FOLLOW;
}

void AVGPlayer::GetDropItems_Implementation(const TArray<FVGItemDropItemPacketItem>& Items) {
}

void AVGPlayer::GetDropItem_Implementation(const FVGItemDropItemPacketItem& packetItem, AVGPlayer* Player) {
}

