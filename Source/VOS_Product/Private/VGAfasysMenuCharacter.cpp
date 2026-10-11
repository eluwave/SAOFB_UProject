#include "VGAfasysMenuCharacter.h"

AVGAfasysMenuCharacter::AVGAfasysMenuCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_afasys_menu_agent_class = NULL;
    this->m_emotion_list_asset = NULL;
    this->m_emotion_list_tab_asset = NULL;
    this->m_motion_wait_time = 0.00f;
    this->m_motion_blend_out_time = 0.00f;
    this->m_afasys_menu_agent = NULL;
    this->m_afasys_event_locator = NULL;
    this->m_action_library = NULL;
    this->m_voice_cue_sheet = NULL;
    this->m_lip_data_pack = NULL;
}

void AVGAfasysMenuCharacter::OnSoundReportPlayEnd(int32 PlayBackId) {
}

void AVGAfasysMenuCharacter::OnFadeEndCallback() {
}

bool AVGAfasysMenuCharacter::IsEventPlay() {
    return false;
}

UVGSkeletalMeshComponent* AVGAfasysMenuCharacter::getMesh() const {
    return NULL;
}

