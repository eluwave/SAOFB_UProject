#include "VGAbyssDungeonManager.h"

UVGAbyssDungeonManager::UVGAbyssDungeonManager() {
}

void UVGAbyssDungeonManager::SetAbyssDungeonProgressFlag(UObject* Context, int32 floorNum) {
}

void UVGAbyssDungeonManager::ResetAbyssBoxDiscoveredFlags(UObject* Context) {
}

void UVGAbyssDungeonManager::InitAbyssDungeonFloorListInLobby(int32 SelectIndex, int32 ActiveIndexNum) {
}

void UVGAbyssDungeonManager::InitAbyssDungeonFloorList(int32 NextFloor) {
}

FVGTransitionDescBP UVGAbyssDungeonManager::GetRandomDungeonTransition() {
    return FVGTransitionDescBP{};
}

int32 UVGAbyssDungeonManager::GetNextFloorNum() const {
    return 0;
}

int32 UVGAbyssDungeonManager::GetFloorNum() const {
    return 0;
}

int32 UVGAbyssDungeonManager::GetAbyssDungeonEnemyLevel() const {
    return 0;
}

int32 UVGAbyssDungeonManager::GetAbyssDungeonCalcEnemyLevel(AActor* Actor) const {
    return 0;
}

void UVGAbyssDungeonManager::DiscardAbyssDungeonSubQuest() {
}

