#include "VGCommandAsset.h"

UVGCommandAsset::UVGCommandAsset() {
    this->m_is_relative_lever = false;
    this->m_lever_eval = EVGLeverConditionEval::None;
    this->m_button_eval = EVGButtonConditionEval::None;
    this->m_is_default_assign = false;
    this->m_lever_value = 0.00f;
    this->m_lever_angle_st = 0.00f;
    this->m_lever_angle_ed = 0.00f;
    this->m_double_tolerence = 10;
    this->m_button_keep_frame = 0;
}

