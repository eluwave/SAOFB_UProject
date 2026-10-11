#include "VGGameEventHuman.h"
#include "VGAvatarCustomizeComponent.h"

AVGGameEventHuman::AVGGameEventHuman(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = true;
    this->m_character_id = EVGCharaUnique::None;
    this->m_anim_blueprint_class = NULL;
    this->m_avatar_customize_component = CreateDefaultSubobject<UVGAvatarCustomizeComponent>(TEXT("AvatarCustomize"));
    this->m_figure_setting_disabled = false;
    this->m_animation = NULL;
    this->m_overwrite_figure_setting = NULL;
}

void AVGGameEventHuman::RequestToPlayDummyLipAnimation(bool value) {
}

void AVGGameEventHuman::RecreatePhysicsState() {
}

void AVGGameEventHuman::ForceClothNextUpdateTeleportAndReset() {
}

