#include "VGDefenceBattleBlueprintLibrary.h"

UVGDefenceBattleBlueprintLibrary::UVGDefenceBattleBlueprintLibrary() {
}

void UVGDefenceBattleBlueprintLibrary::SetDefenceTeamLeave(UObject* Context) {
}

bool UVGDefenceBattleBlueprintLibrary::IsBossLiving(UObject* Context) {
    return false;
}

float UVGDefenceBattleBlueprintLibrary::GetMaxDistanceOfGoalAndBoss(UObject* Context) {
    return 0.0f;
}

bool UVGDefenceBattleBlueprintLibrary::GetFriendParam(UObject* Context, FText& Name, float& hp_percent) {
    return false;
}

float UVGDefenceBattleBlueprintLibrary::GetDistanceOfGoalAndBoss(UObject* Context) {
    return 0.0f;
}

