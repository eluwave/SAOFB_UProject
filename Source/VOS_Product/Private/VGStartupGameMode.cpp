#include "VGStartupGameMode.h"
#include "VGHUD.h"

AVGStartupGameMode::AVGStartupGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HUDClass = AVGHUD::StaticClass();
    this->m_next_situation = TEXT("Title");
}

