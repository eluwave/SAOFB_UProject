#include "VGAIOrganizedTeam.h"

AVGAIOrganizedTeam::AVGAIOrganizedTeam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_team_command = EVGTeamCommand::FOLLOW;
    this->m_unit_command_interval = 1.00f;
    this->m_hate_voice_interval = 5.00f;
    this->m_team_command_table.AddDefaulted(11);
}

void AVGAIOrganizedTeam::SetTeamCommand(const EVGTeamCommand Command, UVGAIUnit* leaderUnit, bool is_voice) {
}

void AVGAIOrganizedTeam::Server_SetTeamCommand_Implementation(FVGTeamCommandPacket packet) {
}
bool AVGAIOrganizedTeam::Server_SetTeamCommand_Validate(FVGTeamCommandPacket packet) {
    return true;
}

void AVGAIOrganizedTeam::MultiCast_SetTeamCommand_Implementation(FVGTeamCommandPacket packet) {
}

bool AVGAIOrganizedTeam::IsRescueEnable() const {
    return false;
}

bool AVGAIOrganizedTeam::IsRecoveryEnable() const {
    return false;
}

bool AVGAIOrganizedTeam::IsHumanRessurectable() const {
    return false;
}

bool AVGAIOrganizedTeam::IsBuffEnable() const {
    return false;
}

bool AVGAIOrganizedTeam::IsAttackEnable() const {
    return false;
}

void AVGAIOrganizedTeam::GetTeamCommand(EVGTeamCommand& Command, UVGAIUnit*& leaderUnit) const {
}

float AVGAIOrganizedTeam::GetRescuePriority() const {
    return 0.0f;
}

float AVGAIOrganizedTeam::GetRecoveryPriority() const {
    return 0.0f;
}

float AVGAIOrganizedTeam::GetBuffPriority() const {
    return 0.0f;
}

float AVGAIOrganizedTeam::GetAttackPriority() const {
    return 0.0f;
}

void AVGAIOrganizedTeam::ExecuteCommandSupport() {
}

void AVGAIOrganizedTeam::ExecuteCommandRecovery() {
}

void AVGAIOrganizedTeam::ExecuteCommandReady() {
}

void AVGAIOrganizedTeam::ExecuteCommandNoAttack() {
}

void AVGAIOrganizedTeam::ExecuteCommandMeeting() {
}

void AVGAIOrganizedTeam::ExecuteCommandFollow() {
}

void AVGAIOrganizedTeam::ExecuteCommandEvacuation() {
}

void AVGAIOrganizedTeam::ExecuteCommandDefence() {
}

void AVGAIOrganizedTeam::ExecuteCommandCrossfire() {
}

void AVGAIOrganizedTeam::ExecuteCommandConquest() {
}

