#include "VGFacialAnimInstance.h"

UVGFacialAnimInstance::UVGFacialAnimInstance() {
    this->m_vowel_pattern = NULL;
    this->m_mouth_pattern = ELipPattern::DEFAULT;
    this->m_mouth_pattern_weight = 0.00f;
    this->m_dummy_lip_animation_weight = 0.00f;
    this->m_blink_weight = 1.00f;
    this->m_sequence_pack = NULL;
    this->m_lips_data = NULL;
}

void UVGFacialAnimInstance::RequestToPlayLipsData(const UDMLipsData* Data) {
}

