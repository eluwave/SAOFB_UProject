#include "VGGameEventTerminalLocator.h"
#include "Net/UnrealNetwork.h"

AVGGameEventTerminalLocator::AVGGameEventTerminalLocator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = false;
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const UProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->m_switch_state = false;
    this->m_switch_possible_num = -1;
    this->m_network_id = -1;
    this->m_switch_state_sync = false;
    this->m_event = NULL;
}

void AVGGameEventTerminalLocator::ChangeSwitchState() {
}

void AVGGameEventTerminalLocator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGGameEventTerminalLocator, m_switch_state_sync);
}

