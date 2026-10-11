#include "VGHudMiniMapIconObject.h"

FVGHudMiniMapIconObject::FVGHudMiniMapIconObject() {
    this->Image = NULL;
    this->Slot = NULL;
    this->IconType = EVGMapIconType::Player;
    this->Owner = NULL;
    this->InitialFindState = EVGMapObjectFindState::Unknown;
    this->ActivationProgressID = 0;
    this->FindProgressID = 0;
    this->HideInKiritoMode = 0;
}

