#include "VGBattleSequencer.h"
#include "Net/UnrealNetwork.h"

AVGBattleSequencer::AVGBattleSequencer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const UProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->m_rule_component = NULL;
    this->m_play_time = 0.00f;
    this->m_end_time = -1.00f;
}

void AVGBattleSequencer::NetMulticast_SendWinner_Versus_Implementation(FVGBattleVersusRewardPacket packet, bool is_rank_match) {
}

void AVGBattleSequencer::NetMulticast_SendWinner_TDM_Implementation(FVGBattleTDMRewardPacket packet, bool is_rank_match) {
}

void AVGBattleSequencer::NetMulticast_SendWinner_BR_Implementation(FVGBattleBRRewardPacket packet) {
}

void AVGBattleSequencer::Multicast_SendTeamDamageRed_Implementation(float Damage) {
}

void AVGBattleSequencer::Multicast_SendTeamDamageBlueAndRed_Implementation(float damage1, float damage2) {
}

void AVGBattleSequencer::Multicast_SendTeamDamageBlue_Implementation(float Damage) {
}

void AVGBattleSequencer::Multicast_SendRespawnLogTDM_Implementation(const FText& Name) {
}

void AVGBattleSequencer::Multicast_SendRespawnLimitTDM_Implementation(int8 blue, int8 red) {
}

void AVGBattleSequencer::Multicast_SendRespawnLimit_Implementation(int32 Count) {
}

void AVGBattleSequencer::Multicast_SendKillCountBR_Implementation(const FString& Name, int8 score) {
}

void AVGBattleSequencer::Multicast_SendDeathPenaltyBR_Implementation(const FString& Name, int8 score) {
}

void AVGBattleSequencer::Multicast_LotRespawnPos_Implementation(int32 unique_id, int8 ID) {
}

void AVGBattleSequencer::Multicast_ChangeState_Implementation(uint8 State) {
}

void AVGBattleSequencer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGBattleSequencer, m_play_time);
    DOREPLIFETIME(AVGBattleSequencer, m_end_time);
}

