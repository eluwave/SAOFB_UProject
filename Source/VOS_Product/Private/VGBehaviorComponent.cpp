#include "VGBehaviorComponent.h"
#include "VGStateMachine.h"

UVGBehaviorComponent::UVGBehaviorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAbsoluteLocation = true;
    this->bAbsoluteRotation = true;
    this->bAbsoluteScale = true;
    this->StateMachine = UVGStateMachine::StaticClass();
    this->m_state_machine = NULL;
    this->m_sub_state_machine = NULL;
}

