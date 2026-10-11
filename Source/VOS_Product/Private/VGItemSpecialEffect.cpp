#include "VGItemSpecialEffect.h"

FVGItemSpecialEffect::FVGItemSpecialEffect() {
    this->Type = EVGPassiveSkill::None;
    this->min_value = 0.00f;
    this->max_value = 0.00f;
    this->rounding = EVGItemSpecialEffectRounding::None;
    this->curve_type = EVGItemSpecialEffectCurve::Linear;
    this->rarity = EVGItemSpecialEffectRarity::None;
    this->enable_physical_gun = false;
    this->enable_optical_gun = false;
    this->enable_physical_sword = false;
    this->enable_optical_sword = false;
    this->enable_accessory = false;
    this->enable_amplify = false;
    this->enable_move = false;
    this->amplify_min_value = 0.00f;
    this->amplify_factor = 0.00f;
    this->price_min_add_factor = 0.00f;
    this->price_max_add_factor = 0.00f;
    this->price_curve_type = EVGItemSpecialEffectCurve::Linear;
    this->display_decimal_digits = 0;
    this->display_type = EVGItemSpecialEffectDisplay::None;
    this->amplify_limit_factor = 0.00f;
    this->dlc1_amplify_min_value = 0.00f;
    this->dlc1_amplify_factor = 0.00f;
    this->dlc1_amplify_power = 0.00f;
    this->dlc2_amplify_min_value = 0.00f;
    this->dlc2_amplify_factor = 0.00f;
    this->dlc2_amplify_power = 0.00f;
    this->dlc3_amplify_min_value = 0.00f;
    this->dlc3_amplify_factor = 0.00f;
    this->dlc3_amplify_power = 0.00f;
    this->tu11_amplify_min_value = 0.00f;
    this->tu11_amplify_factor = 0.00f;
    this->tu11_amplify_power = 0.00f;
    this->dlc4_amplify_min_value = 0.00f;
    this->dlc4_amplify_factor = 0.00f;
    this->dlc4_amplify_power = 0.00f;
}

