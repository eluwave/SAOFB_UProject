#include "VGAttachArmed.h"

AVGAttachArmed::AVGAttachArmed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->attach_chara_class = NULL;
    this->attach_chara_behavior_tree = NULL;
}

void AVGAttachArmed::Multicast_SendAttachCharaId_Implementation(int32 ID) {
}

int32 AVGAttachArmed::GetAttachedActorUniqueId() const {
    return 0;
}

AVGBattleCharacter* AVGAttachArmed::GetAttachedActor() const {
    return NULL;
}

