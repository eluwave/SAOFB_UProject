#include "BTTask_FlyTo.h"

UBTTask_FlyTo::UBTTask_FlyTo() {
    this->NodeName = TEXT("Fly To");
    this->MinimumProximityRequired = 15.00f;
    this->NavigationManager = NULL;
}

void UBTTask_FlyTo::Pathfinding_OnFinish(const FDoNNavigationQueryData& Data) {
}

void UBTTask_FlyTo::Pathfinding_OnDynamicCollisionAlert(const FDonNavigationDynamicCollisionPayload& Data) {
}

