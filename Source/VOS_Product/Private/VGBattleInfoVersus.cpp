#include "VGBattleInfoVersus.h"
#include "Net/UnrealNetwork.h"

AVGBattleInfoVersus::AVGBattleInfoVersus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AVGBattleInfoVersus::OnRep_ResultPacket() {
}

void AVGBattleInfoVersus::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGBattleInfoVersus, m_result_packet);
}

