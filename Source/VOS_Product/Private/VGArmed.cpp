#include "VGArmed.h"
#include "Net/UnrealNetwork.h"
#include "VGAvatarCustomizeComponent.h"
#include "VGFacialMeshComponent.h"

AVGArmed::AVGArmed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_avatar_customize_component = CreateDefaultSubobject<UVGAvatarCustomizeComponent>(TEXT("AvatarCustomize"));
    this->m_weapon_hand_type = EVGWeaponHandType::Fix;
    this->m_weapon_action_required = false;
    this->m_weapon_index_sync = -1;
    this->m_weapon_index_disarmed_sync = -1;
    this->m_skill_recast_coef = 0.00f;
    this->m_parry_action_type_max = 3;
    this->k_good_action_limit_time = 3.00f;
    this->m_good_action_probability = 1.00f;
    this->m_skill_layer = NULL;
    this->m_ultimate = NULL;
    this->m_gadget_camo = NULL;
    this->m_facial_mesh = CreateDefaultSubobject<UVGFacialMeshComponent>(TEXT("FaceMesh"));
}

void AVGArmed::Server_UltimateSniperRemove_Implementation(FVGUltimateSniperRemovePacket packet) {
}
bool AVGArmed::Server_UltimateSniperRemove_Validate(FVGUltimateSniperRemovePacket packet) {
    return true;
}

void AVGArmed::Server_UltimateLauncherSecondFire_Implementation(FVGUltimateLauncherSecondFirePacket packet) {
}
bool AVGArmed::Server_UltimateLauncherSecondFire_Validate(FVGUltimateLauncherSecondFirePacket packet) {
    return true;
}

void AVGArmed::Server_UltimateLauncherRemove_Implementation(FVGUltimateLauncherRemovePacket packet) {
}
bool AVGArmed::Server_UltimateLauncherRemove_Validate(FVGUltimateLauncherRemovePacket packet) {
    return true;
}

void AVGArmed::Server_UltimateLauncherAreaSpawn_Implementation(FVGUltimateLauncherAreaSpawnPacket packet) {
}
bool AVGArmed::Server_UltimateLauncherAreaSpawn_Validate(FVGUltimateLauncherAreaSpawnPacket packet) {
    return true;
}

void AVGArmed::Server_StartSkill_Implementation(int8 layer_id, int8 slot_id) {
}
bool AVGArmed::Server_StartSkill_Validate(int8 layer_id, int8 slot_id) {
    return true;
}

void AVGArmed::Server_SkillBulletRemove_Implementation(FVGSkillBulletRemovePacket packet) {
}
bool AVGArmed::Server_SkillBulletRemove_Validate(FVGSkillBulletRemovePacket packet) {
    return true;
}

void AVGArmed::Server_SkillAreaSpawn_Implementation(FVGSkillAreaSpawnPacket packet) {
}
bool AVGArmed::Server_SkillAreaSpawn_Validate(FVGSkillAreaSpawnPacket packet) {
    return true;
}

void AVGArmed::Server_GadgetKnifeSpawn_Implementation(FVGGadgetKnifeSpawnPacket packet) {
}
bool AVGArmed::Server_GadgetKnifeSpawn_Validate(FVGGadgetKnifeSpawnPacket packet) {
    return true;
}

void AVGArmed::Server_GadgetKnifeRemove_Implementation(FVGGadgetKnifeRemovePacket packet) {
}
bool AVGArmed::Server_GadgetKnifeRemove_Validate(FVGGadgetKnifeRemovePacket packet) {
    return true;
}

void AVGArmed::Server_GadgetInstallation_Implementation(FVGGadgetInstallationPacket packet) {
}
bool AVGArmed::Server_GadgetInstallation_Validate(FVGGadgetInstallationPacket packet) {
    return true;
}

void AVGArmed::Server_FireWeapon_Implementation(int8 weapon_id, uint8 Option, uint16 bullet_id, FVector_NetQuantize Position, FVector_NetQuantizeNormal Direction, float delta_time) {
}
bool AVGArmed::Server_FireWeapon_Validate(int8 weapon_id, uint8 Option, uint16 bullet_id, FVector_NetQuantize Position, FVector_NetQuantizeNormal Direction, float delta_time) {
    return true;
}

void AVGArmed::Server_EndSkill_Implementation() {
}
bool AVGArmed::Server_EndSkill_Validate() {
    return true;
}

void AVGArmed::Server_BulletExplode_Implementation(int8 weapon_id, uint8 Option, FVector_NetQuantize Position, FVector_NetQuantizeNormal Rotation) {
}
bool AVGArmed::Server_BulletExplode_Validate(int8 weapon_id, uint8 Option, FVector_NetQuantize Position, FVector_NetQuantizeNormal Rotation) {
    return true;
}

void AVGArmed::Server_BeaconHit_Implementation(FVGBeaconHitPacket packet) {
}
bool AVGArmed::Server_BeaconHit_Validate(FVGBeaconHitPacket packet) {
    return true;
}

void AVGArmed::ReserveAction(int32 action_id) {
}

void AVGArmed::MulticastSimulated_UltimateSniperRemove_Implementation(FVGUltimateSniperRemovePacket packet) {
}

void AVGArmed::MulticastSimulated_UltimateLauncherSecondFire_Implementation(FVGUltimateLauncherSecondFirePacket packet) {
}

void AVGArmed::MulticastSimulated_UltimateLauncherRemove_Implementation(FVGUltimateLauncherRemovePacket packet) {
}

void AVGArmed::MulticastSimulated_UltimateLauncherAreaSpawn_Implementation(FVGUltimateLauncherAreaSpawnPacket packet) {
}

void AVGArmed::MulticastSimulated_StartSkill_Implementation(int8 layer_id, int8 slot_id) {
}

void AVGArmed::MulticastSimulated_SkillBulletRemove_Implementation(FVGSkillBulletRemovePacket packet) {
}

void AVGArmed::MulticastSimulated_SkillAreaSpawn_Implementation(FVGSkillAreaSpawnPacket packet) {
}

void AVGArmed::MulticastSimulated_GadgetKnifeSpawn_Implementation(FVGGadgetKnifeSpawnPacket packet) {
}

void AVGArmed::MulticastSimulated_GadgetKnifeRemove_Implementation(FVGGadgetKnifeRemovePacket packet) {
}

void AVGArmed::MulticastSimulated_GadgetInstallation_Implementation(FVGGadgetInstallationPacket packet) {
}

void AVGArmed::MulticastSimulated_FireWeapon_Implementation(int8 weapon_id, uint8 Option, uint16 bullet_id, FVector_NetQuantize Position, FVector_NetQuantizeNormal Direction, float delta_time) {
}

void AVGArmed::MulticastSimulated_EndSkill_Implementation() {
}

void AVGArmed::MulticastSimulated_BulletExplode_Implementation(int8 weapon_id, uint8 Option, FVector_NetQuantize Position, FVector_NetQuantizeNormal Rotation) {
}

void AVGArmed::MulticastSimulated_BeaconHit_Implementation(FVGBeaconHitPacket packet) {
}

void AVGArmed::Multicast_UltimateSniperRemove_Implementation(FVGUltimateSniperRemovePacket packet) {
}

void AVGArmed::Multicast_UltimateLauncherSecondFire_Implementation(FVGUltimateLauncherSecondFirePacket packet) {
}

void AVGArmed::Multicast_UltimateLauncherRemove_Implementation(FVGUltimateLauncherRemovePacket packet) {
}

void AVGArmed::Multicast_UltimateLauncherAreaSpawn_Implementation(FVGUltimateLauncherAreaSpawnPacket packet) {
}

void AVGArmed::Multicast_StartSkill_Implementation(int8 layer_id, int8 slot_id) {
}

void AVGArmed::Multicast_SkillBulletRemove_Implementation(FVGSkillBulletRemovePacket packet) {
}

void AVGArmed::Multicast_SkillAreaSpawn_Implementation(FVGSkillAreaSpawnPacket packet) {
}

void AVGArmed::Multicast_GadgetKnifeSpawn_Implementation(FVGGadgetKnifeSpawnPacket packet) {
}

void AVGArmed::Multicast_GadgetKnifeRemove_Implementation(FVGGadgetKnifeRemovePacket packet) {
}

void AVGArmed::Multicast_GadgetInstallation_Implementation(FVGGadgetInstallationPacket packet) {
}

void AVGArmed::Multicast_FireWeapon_Implementation(int8 weapon_id, uint8 Option, uint16 bullet_id, FVector_NetQuantize Position, FVector_NetQuantizeNormal Direction, float delta_time) {
}

void AVGArmed::Multicast_EndSkill_Implementation() {
}

void AVGArmed::Multicast_BulletExplode_Implementation(int8 weapon_id, uint8 Option, FVector_NetQuantize Position, FVector_NetQuantizeNormal Rotation) {
}

void AVGArmed::Multicast_BeaconHit_Implementation(FVGBeaconHitPacket packet) {
}

void AVGArmed::Multicast_AddWeaponMastery_Implementation(int8 chara_unique, int8 division, int32 value) {
}

bool AVGArmed::IsGadgetCamouflage() const {
    return false;
}

float AVGArmed::GetWeight() const {
    return 0.0f;
}

float AVGArmed::GetSpeedWalkBase() const {
    return 0.0f;
}

float AVGArmed::GetSpeedRunBase() const {
    return 0.0f;
}

float AVGArmed::GetSpeedKneelingBase() const {
    return 0.0f;
}

float AVGArmed::GetSpeedJogBase() const {
    return 0.0f;
}

float AVGArmed::GetSpeedFiringWalkBase() const {
    return 0.0f;
}

float AVGArmed::GetSpeedBackWalkBase() const {
    return 0.0f;
}

float AVGArmed::GetSpeedBackJogBase() const {
    return 0.0f;
}

float AVGArmed::GetSpeedADSWalkBase() const {
    return 0.0f;
}

AVGWeaponActor* AVGArmed::GetCurrentWeapon() const {
    return NULL;
}

void AVGArmed::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGArmed, m_weapon_index_sync);
    DOREPLIFETIME(AVGArmed, m_weapon_index_disarmed_sync);
}

