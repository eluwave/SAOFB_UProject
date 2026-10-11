#include "VGDonNavigationManager.h"

AVGDonNavigationManager::AVGDonNavigationManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObstacleQueryChannels.AddDefaulted(2);
    this->AutoCorrectionGuessList.AddDefaulted(11);
}

