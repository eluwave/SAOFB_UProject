#include "VGBattleCharacter.h"
#include "Net/UnrealNetwork.h"
#include "VG3DHudDeadIconComponent.h"
#include "VG3DHudMarkerComponent.h"
#include "VG3DHudStatusComponent.h"
#include "VGHitStopComponent.h"
#include "VGPassiveSkillComponent.h"

AVGBattleCharacter::AVGBattleCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_level = 0;
    this->m_status_table = NULL;
    this->k_health_max_add = 0.00f;
    this->k_health_recover_add = 0.00f;
    this->m_is_respawnable = false;
    this->m_respawnable_time = 10.00f;
    this->m_is_auto_respawnable = false;
    this->m_auto_respawn_interval = 10.00f;
    this->m_respawn_action_id = 0;
    this->m_calc_component_class = NULL;
    this->k_resuscitable_range = 10000.00f;
    this->k_speed_back = 200.00f;
    this->k_speed_back_jog = 300.00f;
    this->k_speed_ads = 100.00f;
    this->k_speed_firing = 100.00f;
    this->k_speed_firing_interp_rate = 0.20f;
    this->k_speed_flying = 300.00f;
    this->m_character_hit = NULL;
    this->m_hud_status_component = CreateDefaultSubobject<UVG3DHudStatusComponent>(TEXT("3DHudStatusComponent"));
    this->m_hud_marker_component = CreateDefaultSubobject<UVG3DHudMarkerComponent>(TEXT("3DHudMarkerComponent"));
    this->m_hud_dead_icon_component = CreateDefaultSubobject<UVG3DHudDeadIconComponent>(TEXT("3DHudDeadIconComponent"));
    this->k_aim_limit_idle = 100.00f;
    this->k_aim_limit_kneeling = 100.00f;
    this->k_aim_limit_jump = 90.00f;
    this->k_aim_limit_pitch_u = 60.00f;
    this->k_aim_limit_pitch_d = 60.00f;
    this->k_aim_base_height = TEXT("b_C_Chest");
    this->k_aim_brendspace_leap = 0.75f;
    this->m_aim_homing_rate_default = 1.00f;
    this->m_aim_check_only_forward = false;
    this->m_ai_eqs_offset_z = 0.00f;
    this->m_battle_talk_character = NULL;
    this->m_calc_component = NULL;
    this->m_hitstop_component = CreateDefaultSubobject<UVGHitStopComponent>(TEXT("HitStopComponent"));
    this->m_ailment_component = NULL;
    this->m_buff_component = NULL;
    this->m_passive_skill_component = CreateDefaultSubobject<UVGPassiveSkillComponent>(TEXT("PassiveSkillComponent"));
    this->m_damage_reaction = NULL;
    this->m_dead_reaction = NULL;
    this->m_ai_team = NULL;
    this->m_ai_spec = 0;
}

void AVGBattleCharacter::SetIsWarp(bool is_warp) {
}

void AVGBattleCharacter::SetActorSensedBoneNameOnSight(const TArray<FName>& bone_name) {
}

void AVGBattleCharacter::SetActorSensedBoneIdOnSight(const TArray<int32>& bone_id) {
}

void AVGBattleCharacter::SetActorEyesBoneName(FName bone_name) {
}

void AVGBattleCharacter::SetActorEyesBoneId(int32 bone_id) {
}

void AVGBattleCharacter::SetActorAimedBoneName(const TArray<FName>& bone_name) {
}

void AVGBattleCharacter::SetActorAimedBoneId(const TArray<int32>& bone_id) {
}

void AVGBattleCharacter::SetActorAimBoneName(FName bone_name) {
}

void AVGBattleCharacter::SetActorAimBoneId(int32 bone_id) {
}

void AVGBattleCharacter::SetActorAimAccuracy(float value) {
}

void AVGBattleCharacter::Server_TalkRequest_Unreliable_Implementation(EVGBattleTalkTrigger trigger_id, AVGBattleCharacter* target_character, AVGBattleCharacter* ignore_player) {
}
bool AVGBattleCharacter::Server_TalkRequest_Unreliable_Validate(EVGBattleTalkTrigger trigger_id, AVGBattleCharacter* target_character, AVGBattleCharacter* ignore_player) {
    return true;
}

void AVGBattleCharacter::Server_TalkRequest_Reliable_Implementation(EVGBattleTalkTrigger trigger_id, AVGBattleCharacter* target_character, AVGBattleCharacter* ignore_player) {
}
bool AVGBattleCharacter::Server_TalkRequest_Reliable_Validate(EVGBattleTalkTrigger trigger_id, AVGBattleCharacter* target_character, AVGBattleCharacter* ignore_player) {
    return true;
}

void AVGBattleCharacter::Server_SendLockCharacter_Implementation(bool result, int32 unique_id, FName lock_node, EVGLock Type) {
}
bool AVGBattleCharacter::Server_SendLockCharacter_Validate(bool result, int32 unique_id, FName lock_node, EVGLock Type) {
    return true;
}

void AVGBattleCharacter::Server_SendGadgetDamage_Implementation(int32 unique_id, int16 skill_id) {
}
bool AVGBattleCharacter::Server_SendGadgetDamage_Validate(int32 unique_id, int16 skill_id) {
    return true;
}

void AVGBattleCharacter::Server_SendDamageReaction_Implementation(FVGDamageReactionPacket packet) {
}
bool AVGBattleCharacter::Server_SendDamageReaction_Validate(FVGDamageReactionPacket packet) {
    return true;
}

void AVGBattleCharacter::Server_SendDamage_Implementation(FVGDamagePacket packet) {
}
bool AVGBattleCharacter::Server_SendDamage_Validate(FVGDamagePacket packet) {
    return true;
}

void AVGBattleCharacter::Server_SendCharacterHitBreak_Implementation(int8 hit_id) {
}
bool AVGBattleCharacter::Server_SendCharacterHitBreak_Validate(int8 hit_id) {
    return true;
}

void AVGBattleCharacter::Server_SendAilmentRecoverSpontaneously_Implementation(int8 Type) {
}
bool AVGBattleCharacter::Server_SendAilmentRecoverSpontaneously_Validate(int8 Type) {
    return true;
}

void AVGBattleCharacter::Server_SendAilmentRecover_Implementation(int32 unique_id, int8 Type, int16 skill_id) {
}
bool AVGBattleCharacter::Server_SendAilmentRecover_Validate(int32 unique_id, int8 Type, int16 skill_id) {
    return true;
}

void AVGBattleCharacter::Server_SendAddHealth_Implementation(int32 unique_id, float add_health, int16 skill_id) {
}
bool AVGBattleCharacter::Server_SendAddHealth_Validate(int32 unique_id, float add_health, int16 skill_id) {
    return true;
}

void AVGBattleCharacter::Server_SendAddBuff_Implementation(int32 unique_id, int8 Type, int8 Op, float value, float Time) {
}
bool AVGBattleCharacter::Server_SendAddBuff_Validate(int32 unique_id, int8 Type, int8 Op, float value, float Time) {
    return true;
}

void AVGBattleCharacter::Server_Resurrect_Implementation(int32 Target) {
}
bool AVGBattleCharacter::Server_Resurrect_Validate(int32 Target) {
    return true;
}

void AVGBattleCharacter::Server_Respawn_Implementation(bool is_resurrect) {
}
bool AVGBattleCharacter::Server_Respawn_Validate(bool is_resurrect) {
    return true;
}

void AVGBattleCharacter::Server_RequestSendTeam_Implementation(AVGBattleCharacter* receiver, AVGBattleCharacter* Character) {
}
bool AVGBattleCharacter::Server_RequestSendTeam_Validate(AVGBattleCharacter* receiver, AVGBattleCharacter* Character) {
    return true;
}

void AVGBattleCharacter::Server_RequestDropItem_Implementation(const AVGBattleCharacter* dropCharacter, bool useUFG, FName partsName, FVector dropPosition) {
}
bool AVGBattleCharacter::Server_RequestDropItem_Validate(const AVGBattleCharacter* dropCharacter, bool useUFG, FName partsName, FVector dropPosition) {
    return true;
}

void AVGBattleCharacter::Server_ReportAim_Implementation(FVector_NetQuantize Position, FVector_NetQuantize interest, FVector_NetQuantize100 Target, int32 target_chara_id) {
}
bool AVGBattleCharacter::Server_ReportAim_Validate(FVector_NetQuantize Position, FVector_NetQuantize interest, FVector_NetQuantize100 Target, int32 target_chara_id) {
    return true;
}

void AVGBattleCharacter::Server_OnResurrected_Implementation(int32 savior) {
}
bool AVGBattleCharacter::Server_OnResurrected_Validate(int32 savior) {
    return true;
}

void AVGBattleCharacter::Server_AchievedGoodAction_Implementation() {
}
bool AVGBattleCharacter::Server_AchievedGoodAction_Validate() {
    return true;
}

void AVGBattleCharacter::ResetCameraPosition() {
}

void AVGBattleCharacter::RemoveActorSensedBoneNameOnSight(FName bone_name) {
}

void AVGBattleCharacter::RemoveActorSensedBoneIdOnSight(int32 bone_id) {
}

void AVGBattleCharacter::RemoveActorAimedBoneName(FName bone_name) {
}

void AVGBattleCharacter::RemoveActorAimedBoneId(int32 bone_id) {
}

void AVGBattleCharacter::OnRep_AITeam() {
}

void AVGBattleCharacter::OnRep_AISpec() {
}

void AVGBattleCharacter::MulticastSimulated_SendLockCharacter_Implementation(bool result, int32 unique_id, FName lock_node, EVGLock Type) {
}

void AVGBattleCharacter::MulticastSimulated_SendGadgetDamage_Implementation(int32 unique_id, int16 skill_id) {
}

void AVGBattleCharacter::MulticastSimulated_SendDamageReaction_Implementation(FVGDamageReactionPacket packet) {
}

void AVGBattleCharacter::MulticastSimulated_SendDamage_Implementation(FVGDamagePacket packet) {
}

void AVGBattleCharacter::MulticastSimulated_SendCharacterHitBreak_Implementation(int8 hit_id) {
}

void AVGBattleCharacter::MulticastSimulated_SendAilmentRecoverSpontaneously_Implementation(int8 Type) {
}

void AVGBattleCharacter::MulticastSimulated_SendAilmentRecover_Implementation(int32 unique_id, int8 Type, int16 skill_id) {
}

void AVGBattleCharacter::MulticastSimulated_SendAddHealth_Implementation(int32 unique_id, float add_health, int16 skill_id) {
}

void AVGBattleCharacter::MulticastSimulated_SendAddBuff_Implementation(int32 unique_id, int8 Type, int8 Op, float value, float Time) {
}

void AVGBattleCharacter::MulticastSimulated_Resurrect_Implementation(int32 Target) {
}

void AVGBattleCharacter::MulticastSimulated_Respawn_Implementation(bool is_resurrect) {
}

void AVGBattleCharacter::MulticastSimulated_ReportAim_Implementation(FVector_NetQuantize Position, FVector_NetQuantize interest, FVector_NetQuantize100 Target, int32 target_chara_id) {
}

void AVGBattleCharacter::MulticastSimulated_OnResurrected_Implementation(int32 savior) {
}

void AVGBattleCharacter::MulticastSimulated_AchievedGoodAction_Implementation() {
}

void AVGBattleCharacter::Multicast_TalkRequest_Unreliable_Implementation(EVGBattleTalkTrigger trigger_id, AVGBattleCharacter* target_character, AVGBattleCharacter* ignore_player) {
}

void AVGBattleCharacter::Multicast_TalkRequest_Reliable_Implementation(EVGBattleTalkTrigger trigger_id, AVGBattleCharacter* target_character, AVGBattleCharacter* ignore_player) {
}

void AVGBattleCharacter::Multicast_SetUFGItemDropEnable_Implementation(bool flag) {
}

void AVGBattleCharacter::Multicast_SetTeam_Implementation(AVGBattleCharacter* Character, AVGAITeam* Team) {
}

void AVGBattleCharacter::Multicast_SendTryLocked_Implementation(int32 unique_id, FName lock_node, EVGLock Type) {
}

void AVGBattleCharacter::Multicast_SendLockCharacter_Implementation(bool result, int32 unique_id, FName lock_node, EVGLock Type) {
}

void AVGBattleCharacter::Multicast_SendLastStandLocation_Implementation(FVector_NetQuantize Position) {
}

void AVGBattleCharacter::Multicast_SendGadgetDamage_Implementation(int32 unique_id, int16 skill_id) {
}

void AVGBattleCharacter::Multicast_SendDamageReaction_Implementation(FVGDamageReactionPacket packet) {
}

void AVGBattleCharacter::Multicast_SendDamage_Implementation(FVGDamagePacket packet) {
}

void AVGBattleCharacter::Multicast_SendCharacterHitBreak_Implementation(int8 hit_id) {
}

void AVGBattleCharacter::Multicast_SendAilmentRecoverSpontaneously_Implementation(int8 Type) {
}

void AVGBattleCharacter::Multicast_SendAilmentRecover_Implementation(int32 unique_id, int8 Type, int16 skill_id) {
}

void AVGBattleCharacter::Multicast_SendAddHealth_Implementation(int32 unique_id, float add_health, int16 skill_id) {
}

void AVGBattleCharacter::Multicast_SendAddBuff_Implementation(int32 unique_id, int8 Type, int8 Op, float value, float Time) {
}

void AVGBattleCharacter::Multicast_Resurrect_Implementation(int32 Target) {
}

void AVGBattleCharacter::Multicast_Respawn_Implementation(bool is_resurrect) {
}

void AVGBattleCharacter::Multicast_ReportAim_Implementation(FVector_NetQuantize Position, FVector_NetQuantize interest, FVector_NetQuantize100 Target, int32 target_chara_id) {
}

void AVGBattleCharacter::Multicast_OnResurrected_Implementation(int32 savior) {
}

void AVGBattleCharacter::Multicast_AchievedGoodAction_Implementation() {
}

bool AVGBattleCharacter::IsRetired() const {
    return false;
}

bool AVGBattleCharacter::IsGameOver() const {
    return false;
}

bool AVGBattleCharacter::IsBuffValid(EVGStatusBuff Type, EVGStatusBuffOp Op) const {
    return false;
}

bool AVGBattleCharacter::IsAilment(EVGStatusAilment Type) const {
    return false;
}

bool AVGBattleCharacter::HasPassiveSkill(EVGPassiveSkill Type) const {
    return false;
}

float AVGBattleCharacter::GetWeight() const {
    return 0.0f;
}

float AVGBattleCharacter::GetSpeedFlyingBase() const {
    return 0.0f;
}

float AVGBattleCharacter::GetSpeedFiringWalkBase() const {
    return 0.0f;
}

float AVGBattleCharacter::GetSpeedBackWalkBase() const {
    return 0.0f;
}

float AVGBattleCharacter::GetSpeedBackJogBase() const {
    return 0.0f;
}

float AVGBattleCharacter::GetSpeedADSWalkBase() const {
    return 0.0f;
}

float AVGBattleCharacter::GetPowerUnarmed() const {
    return 0.0f;
}

float AVGBattleCharacter::GetPowerRange() const {
    return 0.0f;
}

float AVGBattleCharacter::GetPowerMelee() const {
    return 0.0f;
}

float AVGBattleCharacter::GetPowerGadget() const {
    return 0.0f;
}

float AVGBattleCharacter::GetPowerCloseRange() const {
    return 0.0f;
}

float AVGBattleCharacter::GetPassiveSkillValue(EVGPassiveSkill Type) const {
    return 0.0f;
}

float AVGBattleCharacter::GetPassiveSkillCoef(EVGPassiveSkill Type) const {
    return 0.0f;
}

float AVGBattleCharacter::GetOpticalRangeBase() const {
    return 0.0f;
}

FVector AVGBattleCharacter::GetLastStandLocation() {
    return FVector{};
}

bool AVGBattleCharacter::GetIsWarp() const {
    return false;
}

float AVGBattleCharacter::GetHearingRangeBase() const {
    return 0.0f;
}

float AVGBattleCharacter::GetHealthRecoverBase() const {
    return 0.0f;
}

float AVGBattleCharacter::GetHealthRecoverAdd() const {
    return 0.0f;
}

float AVGBattleCharacter::GetHealthMaxBase() const {
    return 0.0f;
}

float AVGBattleCharacter::GetHealthMaxAdd() const {
    return 0.0f;
}

float AVGBattleCharacter::GetHealthMax() const {
    return 0.0f;
}

float AVGBattleCharacter::GetHealth() const {
    return 0.0f;
}

float AVGBattleCharacter::GetEyesightRangeBase() const {
    return 0.0f;
}

int32 AVGBattleCharacter::GetEquipStatusVIT() const {
    return 0;
}

int32 AVGBattleCharacter::GetEquipStatusSTR() const {
    return 0;
}

int32 AVGBattleCharacter::GetEquipStatusLUK() const {
    return 0;
}

int32 AVGBattleCharacter::GetEquipStatusINT() const {
    return 0;
}

int32 AVGBattleCharacter::GetEquipStatusDEX() const {
    return 0;
}

int32 AVGBattleCharacter::GetEquipStatusAGI() const {
    return 0;
}

float AVGBattleCharacter::GetDefense() const {
    return 0.0f;
}

EVGCharaRole AVGBattleCharacter::GetCharaRole() const {
    return EVGCharaRole::Assault;
}

int32 AVGBattleCharacter::GetCharacterLevel() const {
    return 0;
}

float AVGBattleCharacter::GetBuffValue(EVGStatusBuff Type) const {
    return 0.0f;
}

int32 AVGBattleCharacter::GetBuffStatusVIT() const {
    return 0;
}

int32 AVGBattleCharacter::GetBuffStatusSTR() const {
    return 0;
}

int32 AVGBattleCharacter::GetBuffStatusLUK() const {
    return 0;
}

int32 AVGBattleCharacter::GetBuffStatusINT() const {
    return 0;
}

int32 AVGBattleCharacter::GetBuffStatusDEX() const {
    return 0;
}

int32 AVGBattleCharacter::GetBuffStatusAGI() const {
    return 0;
}

int32 AVGBattleCharacter::GetBasicStatusVIT() const {
    return 0;
}

int32 AVGBattleCharacter::GetBasicStatusSTR() const {
    return 0;
}

int32 AVGBattleCharacter::GetBasicStatusLUK() const {
    return 0;
}

int32 AVGBattleCharacter::GetBasicStatusINT() const {
    return 0;
}

int32 AVGBattleCharacter::GetBasicStatusDEX() const {
    return 0;
}

int32 AVGBattleCharacter::GetBasicStatusAGI() const {
    return 0;
}

int32 AVGBattleCharacter::GetAlterStatusVIT() const {
    return 0;
}

int32 AVGBattleCharacter::GetAlterStatusSTR() const {
    return 0;
}

int32 AVGBattleCharacter::GetAlterStatusLUK() const {
    return 0;
}

int32 AVGBattleCharacter::GetAlterStatusINT() const {
    return 0;
}

int32 AVGBattleCharacter::GetAlterStatusDEX() const {
    return 0;
}

int32 AVGBattleCharacter::GetAlterStatusAGI() const {
    return 0;
}

float AVGBattleCharacter::GetAlterRate() const {
    return 0.0f;
}

void AVGBattleCharacter::GetAimPosition(FVector& Position) const {
}

void AVGBattleCharacter::GetAimInterest(FVector& Position) const {
}

void AVGBattleCharacter::GetActorEyesViewPoint(FVector& OutLocation, FRotator& OutRotation) const {
}

float AVGBattleCharacter::GetActorEqsOffsetHeight() const {
    return 0.0f;
}

void AVGBattleCharacter::GetActorAimPosition(FVector& OutLocation) const {
}

void AVGBattleCharacter::GetActorAimedPosition(TArray<FVector>& outLocations) const {
}

void AVGBattleCharacter::GetActorAimedBoneId(TArray<int32>& outBoneId) const {
}

void AVGBattleCharacter::ClearActorSensedBoneNameOnSight() {
}

void AVGBattleCharacter::ClearActorAimedBoneName() {
}

void AVGBattleCharacter::AddActorSensedBoneNameOnSight(FName bone_name) {
}

void AVGBattleCharacter::AddActorSensedBoneIdOnSight(int32 bone_id) {
}

void AVGBattleCharacter::AddActorAimedBoneName(FName bone_name) {
}

void AVGBattleCharacter::AddActorAimedBoneId(int32 bone_id) {
}

void AVGBattleCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGBattleCharacter, m_ai_team);
    DOREPLIFETIME(AVGBattleCharacter, m_ai_spec);
}

