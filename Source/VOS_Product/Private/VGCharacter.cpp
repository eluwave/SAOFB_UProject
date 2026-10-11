#include "VGCharacter.h"
#include "Net/UnrealNetwork.h"
#include "VGActionComponent.h"
#include "VGBehaviorComponent.h"
#include "VGCameraComponent.h"
#include "VGCharaBodyComponent.h"
#include "VGCharacterMovementComponent.h"
#include "VGMapIconComponent.h"
#include "VGQuestComponent.h"
#include "VGSkeletalMeshComponent.h"
#include "VGSoundComponent.h"
#include "VGTriggerComponent.h"
#include "VGVfxComponent.h"

AVGCharacter::AVGCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UVGCharaBodyComponent>(TEXT("CollisionCylinder")).SetDefaultSubobjectClass<UVGSkeletalMeshComponent>(TEXT("CharacterMesh0")).SetDefaultSubobjectClass<UVGCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->bUseControllerRotationYaw = false;
    const UProperty* p_CapsuleComponent = GetClass()->FindPropertyByName("CapsuleComponent");
    (*p_CapsuleComponent->ContainerPtrToValuePtr<UCapsuleComponent*>(this)) = (UCapsuleComponent*)RootComponent;
    this->m_state_machine_class = NULL;
    this->m_state_base_action_ids[0] = -1;
    this->m_state_base_action_ids[1] = -1;
    this->m_state_base_action_ids[2] = -1;
    this->m_state_base_action_ids[3] = -1;
    this->m_state_base_action_ids[4] = -1;
    this->m_state_base_action_ids[5] = -1;
    this->m_state_base_action_ids[6] = -1;
    this->m_state_base_action_ids[7] = -1;
    this->m_state_base_action_ids[8] = -1;
    this->m_state_base_action_ids[9] = -1;
    this->m_state_base_action_ids[10] = -1;
    this->m_state_base_action_ids[11] = -1;
    this->m_state_base_action_ids[12] = -1;
    this->m_state_base_action_ids[13] = -1;
    this->m_common_action_library = NULL;
    this->m_common_triger_library = NULL;
    this->m_chara_type = EVGCharaType::Human;
    this->m_chara_unique = EVGCharaUnique::None;
    this->m_chara_gender = EVGCharaGender::Unknown;
    this->m_game_type = EVGGameType::None;
    this->m_unique_id = -1;
    this->m_team_id = EVGCharaTeam::None;
    this->m_chara_voice = NULL;
    this->m_chara_se = NULL;
    this->m_behavior_component = CreateDefaultSubobject<UVGBehaviorComponent>(TEXT("BehaviorComponent"));
    this->m_action_component = CreateDefaultSubobject<UVGActionComponent>(TEXT("ActionComponent"));
    this->m_trigger_component = CreateDefaultSubobject<UVGTriggerComponent>(TEXT("TriggerComponent"));
    this->m_camera_component = CreateDefaultSubobject<UVGCameraComponent>(TEXT("CameraComponent"));
    this->m_map_icon_component = CreateDefaultSubobject<UVGMapIconComponent>(TEXT("MapIconComponent"));
    this->m_quest_component = CreateDefaultSubobject<UVGQuestComponent>(TEXT("QuestComponent"));
    this->m_vfx_component = CreateDefaultSubobject<UVGVfxComponent>(TEXT("VFXComponent"));
    this->m_sound_component = CreateDefaultSubobject<UVGSoundComponent>(TEXT("SoundComponent"));
    this->m_camera_actor_component = NULL;
    this->k_camera_fov_y = 40.00f;
    this->k_camera_fov_y_run = 60.00f;
    this->k_camera_fov_y_air = 45.00f;
    this->k_camera_fov_y_ads = 25.00f;
    this->k_camera_fov_y_lerp = 0.20f;
    this->k_camera_fov_y_lerp_ads = 0.50f;
    this->k_camera_distance_unarm = 500.00f;
    this->k_camera_distance_melee = 500.00f;
    this->k_camera_distance_range = 500.00f;
    this->k_camera_distance_lerp = 0.20f;
    this->k_camera_interp_rate_unarm = 1.00f;
    this->k_camera_interp_rate_melee = 1.00f;
    this->k_camera_interp_rate_range = 1.00f;
    this->k_camera_interp_diff_unarm = 0.10f;
    this->k_camera_interp_diff_melee = 0.10f;
    this->k_camera_interp_diff_range = 0.10f;
    this->k_camera_side_rotation_unarm = 0.00f;
    this->k_camera_side_rotation_melee = 0.00f;
    this->k_camera_side_rotation_range = 140.00f;
    this->k_camera_side_rotation_limit = 16.00f;
    this->k_camera_speed = 3.00f;
    this->k_camera_pitch_upper = 45.00f;
    this->k_camera_pitch_lower = 45.00f;
    this->k_camera_reset_time = 0.50f;
    this->k_is_invalid_culling = false;
    this->k_culling_time = 0.40f;
    this->k_speed_walk = 300.00f;
    this->k_speed_jog = 500.00f;
    this->k_speed_run = 800.00f;
    this->k_speed_kneeling = 200.00f;
    this->k_blend_time_walk_jog = 1.00f;
    this->k_rotation_degree = 360.00f;
    this->k_pitch_change_min_scale = 1.00f;
    this->k_pitch_change_max_scale = 1.50f;
    this->k_pitch_change_min_pitch = -300.00f;
    this->k_pitch_change_max_pitch = 0.00f;
    const UProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this))->SetupAttachment(RootComponent);
}

void AVGCharacter::StartExtraActionMode(int32 index) {
}

void AVGCharacter::SetTeamId(EVGCharaTeam team_id) {
}

void AVGCharacter::SetPlayable(bool is_playable) {
}

void AVGCharacter::SetNamedCharacter(bool enable) {
}

void AVGCharacter::SetBounty(bool enable) {
}

void AVGCharacter::Server_SendRotationYaw_Implementation(float degree) {
}
bool AVGCharacter::Server_SendRotationYaw_Validate(float degree) {
    return true;
}

void AVGCharacter::Server_AddMovementInput_Implementation(FVector_NetQuantizeNormal Direction, float Scale) {
}
bool AVGCharacter::Server_AddMovementInput_Validate(FVector_NetQuantizeNormal Direction, float Scale) {
    return true;
}

void AVGCharacter::ReserveAction(int32 action_id) {
}

void AVGCharacter::OnRep_UniqueId() {
}

void AVGCharacter::Multicast_SetExtraActionMode_Implementation(int32 index) {
}

bool AVGCharacter::IsNamedCharacter() {
    return false;
}

bool AVGCharacter::IsLocalUser() const {
    return false;
}

bool AVGCharacter::IsBounty() {
    return false;
}

EVGCharaTeam AVGCharacter::GetTeamId() const {
    return EVGCharaTeam::None;
}

float AVGCharacter::GetSpeedWalkBase() const {
    return 0.0f;
}

float AVGCharacter::GetSpeedRunBase() const {
    return 0.0f;
}

float AVGCharacter::GetSpeedKneelingBase() const {
    return 0.0f;
}

float AVGCharacter::GetSpeedJogBase() const {
    return 0.0f;
}

int32 AVGCharacter::GetExtraActionIndex() const {
    return 0;
}

FVGExtraActionCoeff AVGCharacter::GetExtraActionCoeff() const {
    return FVGExtraActionCoeff{};
}

EVGCharaType AVGCharacter::GetCharaType() const {
    return EVGCharaType::Human;
}

void AVGCharacter::EndExtraActionMode() {
}

void AVGCharacter::DeleteEffect(FName signal_name) {
}

void AVGCharacter::CreateEffect(const FVGVfxSignalDesc& desc) {
}

void AVGCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGCharacter, m_unique_id);
    DOREPLIFETIME(AVGCharacter, m_unique_code);
}

