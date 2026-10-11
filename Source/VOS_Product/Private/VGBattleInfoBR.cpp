#include "VGBattleInfoBR.h"
#include "Net/UnrealNetwork.h"

AVGBattleInfoBR::AVGBattleInfoBR(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AVGBattleInfoBR::OnRep_ResultPacket() {
}

void AVGBattleInfoBR::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGBattleInfoBR, m_result_packet);
}

