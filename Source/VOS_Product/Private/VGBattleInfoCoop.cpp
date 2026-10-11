#include "VGBattleInfoCoop.h"
#include "Net/UnrealNetwork.h"

AVGBattleInfoCoop::AVGBattleInfoCoop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AVGBattleInfoCoop::OnRep_ResultPacket() {
}

void AVGBattleInfoCoop::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGBattleInfoCoop, m_result_packet);
}

