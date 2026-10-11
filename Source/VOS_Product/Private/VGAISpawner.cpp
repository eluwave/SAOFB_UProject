#include "VGAISpawner.h"
#include "Net/UnrealNetwork.h"

AVGAISpawner::AVGAISpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const UProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->m_is_regist_team = true;
    this->m_add_nearest_team = false;
    this->m_unit_class = NULL;
    this->m_is_leader = false;
    this->m_spawn_enable = 7;
    this->m_item_drop_table = NULL;
    this->m_ufg_item_drop_table = NULL;
    this->m_is_auto_set_team_id = true;
    this->m_team_id = EVGCharaTeam::Red;
    this->m_team = NULL;
}

void AVGAISpawner::SetupPreviewMesh(UClass* characterClass, float Scale, const FVector& offsetLocation) {
}

void AVGAISpawner::SetupActorByEquipmentTable(AActor* Actor, int32 lv, UVGCharacterEquipmentTable* Table) {
}

void AVGAISpawner::SetupActor(AActor* Actor, int32 lv, FVGWeaponSetting weaponSetting) {
}

void AVGAISpawner::SetPlayable(bool is_playable) {
}

void AVGAISpawner::SetActorInvisible(AVGCharacter* Character) {
}

void AVGAISpawner::RegistTeam(AVGAITeam* Team) {
}

void AVGAISpawner::OnRep_UniqueIdAndLevel() {
}

void AVGAISpawner::Multicast_ReserveUniqueIdAndLevel_Implementation(int32 unique_id, int32 lv) {
}

bool AVGAISpawner::IsSpawnEnable() const {
    return false;
}

int32 AVGAISpawner::GetLevel_Implementation() {
    return 0;
}

void AVGAISpawner::GetDifficultyData(FVGAIDifficulty& difficultyData) const {
}

AActor* AVGAISpawner::GetActorByUniqueId(int32 unique_id) const {
    return NULL;
}

void AVGAISpawner::CreateSpawnEffect_Implementation(AVGCharacter* Character) {
}

void AVGAISpawner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGAISpawner, m_unique_id_and_lv_array);
}

