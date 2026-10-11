#include "VGAITeamManager.h"

AVGAITeamManager::AVGAITeamManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_leader_distance = 2500.00f;
    this->m_base_distance = 500.00f;
    this->m_enemy_distance = 5000.00f;
    this->m_defence_boss_team = NULL;
    this->m_friend_boss_team = NULL;
}

TArray<AVGAITeam*> AVGAITeamManager::GetTeams() const {
    return TArray<AVGAITeam*>();
}

EVGTeamRelation AVGAITeamManager::GetTeamRelationFromPlayer_Default(const AVGAITeam* targetTeam) {
    return EVGTeamRelation::NONE;
}

EVGTeamRelation AVGAITeamManager::GetTeamRelationFromPlayer(const AVGAITeam* targetTeam) const {
    return EVGTeamRelation::NONE;
}

EVGTeamRelation AVGAITeamManager::GetTeamRelation_Default(const AVGAITeam* Team, const AVGAITeam* targetTeam) {
    return EVGTeamRelation::NONE;
}

EVGTeamRelation AVGAITeamManager::GetTeamRelation(const AVGAITeam* Team, const AVGAITeam* targetTeam) const {
    return EVGTeamRelation::NONE;
}

void AVGAITeamManager::GetTeamBySpawner(AVGAITeam*& Team, AVGAISpawner* spawner) {
}

void AVGAITeamManager::GetTeamByRelation(TArray<AVGAITeam*>& teams, AVGAITeam* baseTeam, const TArray<EVGTeamRelation>& relations) {
}

void AVGAITeamManager::GetTeamByName(AVGAITeam*& Team, const FName& teamName) {
}

void AVGAITeamManager::GetTeamByActor(AVGAITeam*& Team, AActor* Actor) {
}

void AVGAITeamManager::GetPlayerTeams(TArray<AVGAITeam*>& teams) {
}

void AVGAITeamManager::GetNearestTeam(AVGAITeam*& Team, const FVector& Position, bool enablePrivateTeam) {
}

float AVGAITeamManager::GetLeaderDistance() const {
    return 0.0f;
}

float AVGAITeamManager::GetEnemyDistance() const {
    return 0.0f;
}

float AVGAITeamManager::GetDefenceDistance() const {
    return 0.0f;
}

void AVGAITeamManager::DiffuseSkillHate(const UVGAIUnit* sourceUnit, float baseHate, float Radius) {
}

AVGAITeam* AVGAITeamManager::CreateTeam(const FName& teamName, const FVector& Position, EVGTeamCategory Category, bool privateTeam, UClass* teamClass, bool tickActivate) {
    return NULL;
}

bool AVGAITeamManager::AddTeam(AVGAITeam* newTeam, bool ignoreWeight, bool tickActivate) {
    return false;
}

void AVGAITeamManager::AddDiscoveredUnit(UVGAIUnit* discoveredUnit) {
}

