#include "VGDropItemParamInfo.h"
#include "Net/UnrealNetwork.h"

AVGDropItemParamInfo::AVGDropItemParamInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const UProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->m_player_data = NULL;
}

void AVGDropItemParamInfo::OnRep_LgendaryAccessoryEnabledUsers(TArray<FString> value) {
}

void AVGDropItemParamInfo::onPlayerLogout(AController* Exiting) {
}

void AVGDropItemParamInfo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGDropItemParamInfo, m_legendary_accessory_enabled_users);
}

