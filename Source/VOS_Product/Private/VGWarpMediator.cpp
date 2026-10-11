#include "VGWarpMediator.h"

AVGWarpMediator::AVGWarpMediator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsWarpNPC = false;
    this->IsForceOnNaviMesh = false;
}

void AVGWarpMediator::WarpFailed() {
}

void AVGWarpMediator::WarpBestPosition(AVGBattleCharacter* Actor, FVector Location, FRotator Rotation) {
}

void AVGWarpMediator::ResetWireState(AVGBattleCharacter* Actor) {
}

void AVGWarpMediator::ChangeActorHidden(AVGBattleCharacter* Actor, bool is_hidden) {
}

void AVGWarpMediator::AfterWarp(AVGBattleCharacter* Actor) {
}

