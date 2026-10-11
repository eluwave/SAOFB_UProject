#include "VGANAIBranch.h"

UVGANAIBranch::UVGANAIBranch() {
    this->m_key = EVGPadKey::AL_Up;
    this->m_condition = NULL;
    this->m_dodge_action = false;
    this->m_cancel_condition_forward = NULL;
    this->m_cancel_condition_back = NULL;
    this->m_cancel_condition_side = NULL;
}

