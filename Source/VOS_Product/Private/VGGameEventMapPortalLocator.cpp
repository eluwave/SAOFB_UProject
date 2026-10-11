#include "VGGameEventMapPortalLocator.h"

AVGGameEventMapPortalLocator::AVGGameEventMapPortalLocator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = false;
    this->m_is_launchable = false;
    this->m_is_single_portal = false;
    this->m_single_portal = NULL;
    this->m_multi_event = NULL;
}

