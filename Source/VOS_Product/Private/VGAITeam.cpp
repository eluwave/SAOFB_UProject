#include "VGAITeam.h"
#include "Components/ArrowComponent.h"
#include "Net/UnrealNetwork.h"

AVGAITeam::AVGAITeam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const UProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Root"));
    this->m_team_enable = 7;
    this->m_appearance_weight = 100;
    this->m_spawn_type = EVGTeamSpawnType::AUTO;
    this->m_spawn_distance = 5000.00f;
    this->m_delete_distance = 10000.00f;
    this->m_respawn_interval = -1.00f;
    this->m_respawn_times = -1;
    this->m_item_drop_times = -1;
    this->m_team_radius = 10000.00f;
    this->m_team_category = EVGTeamCategory::ENEMY;
    this->m_team_rule = EVGTeamRule::EXPLORER;
    this->m_pathfinding_group = EVGTeamPathFindingGroup::Auto;
    this->m_is_ressurectable = true;
    this->m_home_radius = -1.00f;
    this->m_leader_radius = -1.00f;
    this->m_leader_unit = NULL;
    this->m_player_unit = NULL;
    this->m_player_actor = NULL;
}

int32 AVGAITeam::SpawnActorAll() {
    return 0;
}

void AVGAITeam::SetTeamRule(const EVGTeamRule Rule) {
}

void AVGAITeam::SetTeamCommand(const EVGTeamCommand Command, UVGAIUnit* leaderUnit, bool is_voice) {
}

void AVGAITeam::SetSpawnType(const EVGTeamSpawnType spawnType) {
}

void AVGAITeam::SetSpawnFlag() {
}

void AVGAITeam::SetDeleteFlag() {
}

void AVGAITeam::SetCategory_Implementation(EVGTeamCategory newCategory) {
}

void AVGAITeam::RegistTeam() {
}

void AVGAITeam::OnRep_Category() {
}

bool AVGAITeam::IsRescueEnable() const {
    return false;
}

bool AVGAITeam::IsRecoveryEnable() const {
    return false;
}

bool AVGAITeam::IsPlayerTeam() const {
    return false;
}

bool AVGAITeam::IsPerceptionByUnit(const UVGAIUnit* unit) {
    return false;
}

bool AVGAITeam::IsPerceptionByActor(const AActor* Actor) {
    return false;
}

bool AVGAITeam::IsHumanRessurectable() const {
    return false;
}

bool AVGAITeam::IsExterminated() const {
    return false;
}

bool AVGAITeam::IsBuffEnable() const {
    return false;
}

bool AVGAITeam::IsBossTeam() const {
    return false;
}

bool AVGAITeam::IsAttackEnable() const {
    return false;
}

void AVGAITeam::GetUnitBySpawner(const AVGAISpawner* spawner, UVGAIUnit*& unit) {
}

void AVGAITeam::GetUnitByActor(const AActor* Actor, UVGAIUnit*& unit) {
}

void AVGAITeam::GetUnit(TArray<UVGAIUnit*>& unit) const {
}

EVGTeamRule AVGAITeam::GetTeamRule() const {
    return EVGTeamRule::EXPLORER;
}

float AVGAITeam::GetTeamLeaderDistance() const {
    return 0.0f;
}

UVGAIUnit* AVGAITeam::GetTeamLeader() const {
    return NULL;
}

void AVGAITeam::GetTeamCommand(EVGTeamCommand& Command, UVGAIUnit*& leaderUnit) const {
}

void AVGAITeam::GetSpawnType(EVGTeamSpawnType& spawnType) const {
}

float AVGAITeam::GetRescuePriority() const {
    return 0.0f;
}

float AVGAITeam::GetRecoveryPriority() const {
    return 0.0f;
}

void AVGAITeam::GetPerceptionUnitByIndex(UVGAIUnit*& unit, int32 index) {
}

void AVGAITeam::GetPerceptionByUnit(FVGAITeamPerceptionUnitInfo& perceptionUnit, const UVGAIUnit* unit) {
}

void AVGAITeam::GetPerceptionByIndex(FVGAITeamPerceptionUnitInfo& perceptionUnit, int32 index) {
}

void AVGAITeam::GetPerception(TArray<FVGAITeamPerceptionUnitInfo>& perceptionUnit) {
}

void AVGAITeam::GetName(FName& Name) const {
}

float AVGAITeam::GetHomeDistance() const {
    return 0.0f;
}

float AVGAITeam::GetBuffPriority() const {
    return 0.0f;
}

float AVGAITeam::GetAttackPriority() const {
    return 0.0f;
}

void AVGAITeam::ClearUnit() {
}

UVGAIUnit* AVGAITeam::AddUnit(AVGAISpawner* spawner, AActor* Actor) {
    return NULL;
}

void AVGAITeam::AddSpawner(AVGAISpawner* spawner) {
}

UVGAIUnit* AVGAITeam::AddActor(AActor* Actor, UClass* unitClass) {
    return NULL;
}

void AVGAITeam::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGAITeam, m_team_category);
    DOREPLIFETIME(AVGAITeam, m_team_rule);
}

