#include "VGCoordinateAgent.h"

AVGCoordinateAgent::AVGCoordinateAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_coordinate_widget = NULL;
    this->m_avatar = NULL;
    this->m_weapon_actor = NULL;
    this->m_target_uid = EVGCharaUnique::None;
    this->m_temp_setting = NULL;
    this->m_mmo = NULL;
}

void AVGCoordinateAgent::Start(bool cancelable) {
}

void AVGCoordinateAgent::CommitSettingData(EVGCharaUnique Type) {
}

void AVGCoordinateAgent::BindWeaponActor(AActor* Actor) {
}

void AVGCoordinateAgent::BindAvatar(AVGCharacter* avatar, EVGCharaUnique cid) {
}

