#include "VGANPlayBattleTalk.h"

UVGANPlayBattleTalk::UVGANPlayBattleTalk() {
    this->m_talk_trigger = EVGBattleTalkTrigger::Ailments;
    this->m_main_type = EVGTalkCharacter::Self;
    this->m_main_character = NULL;
    this->m_target_type = EVGTalkCharacter::AttackTarget;
    this->m_target_character = NULL;
}

