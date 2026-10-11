#include "VGGameEventSupervisor.h"

AVGGameEventSupervisor::AVGGameEventSupervisor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_skip_dialog = NULL;
    this->m_deferred_event_launcher = NULL;
}

void AVGGameEventSupervisor::onTransitionStart() {
}

