#include "VGBattleInfoTDM.h"
#include "Net/UnrealNetwork.h"

AVGBattleInfoTDM::AVGBattleInfoTDM(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AVGBattleInfoTDM::OnRep_ResultPacket() {
}

void AVGBattleInfoTDM::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGBattleInfoTDM, m_result_packet);
}

