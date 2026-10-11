#include "VGBattleInfo.h"
#include "Net/UnrealNetwork.h"

AVGBattleInfo::AVGBattleInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const UProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->m_is_host = false;
    this->m_sync_step = EVGBattleSyncStep::None;
}

void AVGBattleInfo::Server_SendSyncStep_Implementation(EVGBattleSyncStep step_id) {
}
bool AVGBattleInfo::Server_SendSyncStep_Validate(EVGBattleSyncStep step_id) {
    return true;
}

void AVGBattleInfo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGBattleInfo, m_is_host);
    DOREPLIFETIME(AVGBattleInfo, m_sync_step);
}

