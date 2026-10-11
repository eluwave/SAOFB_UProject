#include "VGGameEventCharacter.h"
#include "Components/CapsuleComponent.h"
#include "VGSkeletalMeshComponent.h"
#include "VGSoundComponent.h"
#include "VGVfxComponent.h"

AVGGameEventCharacter::AVGGameEventCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("RootComponent"));
    this->m_gender = EVGCharaGender::Unknown;
    this->m_is_used_in_demo = false;
    this->m_is_custom_stencil_enabled = false;
    this->m_root_component = (UCapsuleComponent*)RootComponent;
    this->m_mesh_component = CreateDefaultSubobject<UVGSkeletalMeshComponent>(TEXT("MeshComponent"));
    this->m_sound_component = CreateDefaultSubobject<UVGSoundComponent>(TEXT("SoundComponent"));
    this->m_vfx_component = CreateDefaultSubobject<UVGVfxComponent>(TEXT("VFXComponent"));
    this->m_mesh_component->SetupAttachment(RootComponent);
}

void AVGGameEventCharacter::StopAnimation(float BlendOut) {
}

void AVGGameEventCharacter::SetTranslucent(int32 ID, float coef) {
}

void AVGGameEventCharacter::SetLookAtPosition(FVector pos, float Duration) {
}

void AVGGameEventCharacter::SetLookAtEnabled(bool value) {
}

void AVGGameEventCharacter::SetCullingEnabled(bool value) {
}

void AVGGameEventCharacter::ResetTranslucent(int32 ID) {
}

void AVGGameEventCharacter::PlayAnimation(const FVGGameEventCharacterAnimParam& param) {
}

bool AVGGameEventCharacter::IsAnimationPlaying() const {
    return false;
}

UVGSoundComponent* AVGGameEventCharacter::GetSoundComponent() const {
    return NULL;
}

EVGCharaGender AVGGameEventCharacter::GetGender() const {
    return EVGCharaGender::Male;
}

void AVGGameEventCharacter::OnContact_Implementation(const FVGGameEventContactParam& param) {}
