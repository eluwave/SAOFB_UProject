#include "VGHUD.h"

AVGHUD::AVGHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->DefaultHUDVisibility = true;
}

