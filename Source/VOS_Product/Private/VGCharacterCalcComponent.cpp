#include "VGCharacterCalcComponent.h"

UVGCharacterCalcComponent::UVGCharacterCalcComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->k_health_vit_coeff = 20.00f;
    this->k_weight_str_coeff = 10.00f;
    this->k_health_recover_skill_per_time = 120.00f;
    this->k_health_recover_gadget_per_time = 60.00f;
    this->k_alter_lv_coef_STR = 0.10f;
    this->k_alter_lv_coef_VIT = 0.10f;
    this->k_alter_lv_coef_INT = 0.10f;
    this->k_alter_lv_coef_AGI = 0.10f;
    this->k_alter_lv_coef_DEX = 0.10f;
    this->k_alter_lv_coef_LUK = 0.10f;
    this->k_speed_level_coef = 0.08f;
    this->k_speed_enemy_coef = 1.00f;
    this->k_flying_speed_AGI = 0.00f;
    this->k_weight_penalty = 0.60f;
    this->k_weight_rate_coef = 100.00f;
    this->k_defense_coef_VIT = 0.00f;
    this->k_defense_coef_AGI = 0.00f;
    this->k_defense_coef_LUK = 0.00f;
    this->k_aim_accuracy_DEX = 0.00f;
    this->k_aim_accuracy_min = 0.05f;
    this->k_aim_accuracy_rate_AGI = 0.01f;
    this->k_aim_accuracy_rate_max = 5.00f;
    this->k_skill_reusable_time_INT = 0.00f;
    this->k_skill_reusable_time_force = 0.00f;
}

bool UVGCharacterCalcComponent::IsInventoryLimitOver() const {
    return false;
}

bool UVGCharacterCalcComponent::IsBuffValid(EVGStatusBuff Type, EVGStatusBuffOp Op) const {
    return false;
}

bool UVGCharacterCalcComponent::IsAilment(EVGStatusAilment Type) const {
    return false;
}

float UVGCharacterCalcComponent::GetWeightRate() const {
    return 0.0f;
}

float UVGCharacterCalcComponent::GetWeightCapacity() const {
    return 0.0f;
}

float UVGCharacterCalcComponent::GetWeight() const {
    return 0.0f;
}

int32 UVGCharacterCalcComponent::GetTotalStatusVIT() const {
    return 0;
}

int32 UVGCharacterCalcComponent::GetTotalStatusSTR() const {
    return 0;
}

int32 UVGCharacterCalcComponent::GetTotalStatusLUK() const {
    return 0;
}

int32 UVGCharacterCalcComponent::GetTotalStatusINT() const {
    return 0;
}

int32 UVGCharacterCalcComponent::GetTotalStatusDEX() const {
    return 0;
}

int32 UVGCharacterCalcComponent::GetTotalStatusAGI() const {
    return 0;
}

EVGCharaUnique UVGCharacterCalcComponent::GetCharaUnique() const {
    return EVGCharaUnique::None;
}

AVGBattleCharacter* UVGCharacterCalcComponent::GetCharacter() const {
    return NULL;
}

float UVGCharacterCalcComponent::GetBuffValue(EVGStatusBuff Type) const {
    return 0.0f;
}

int32 UVGCharacterCalcComponent::GetBuffStatusVIT() const {
    return 0;
}

int32 UVGCharacterCalcComponent::GetBuffStatusSTR() const {
    return 0;
}

int32 UVGCharacterCalcComponent::GetBuffStatusLUK() const {
    return 0;
}

int32 UVGCharacterCalcComponent::GetBuffStatusINT() const {
    return 0;
}

int32 UVGCharacterCalcComponent::GetBuffStatusDEX() const {
    return 0;
}

int32 UVGCharacterCalcComponent::GetBuffStatusAGI() const {
    return 0;
}

int32 UVGCharacterCalcComponent::GetBasicStatusVIT() const {
    return 0;
}

int32 UVGCharacterCalcComponent::GetBasicStatusSTR() const {
    return 0;
}

int32 UVGCharacterCalcComponent::GetBasicStatusLUK() const {
    return 0;
}

int32 UVGCharacterCalcComponent::GetBasicStatusINT() const {
    return 0;
}

int32 UVGCharacterCalcComponent::GetBasicStatusDEX() const {
    return 0;
}

int32 UVGCharacterCalcComponent::GetBasicStatusAGI() const {
    return 0;
}

float UVGCharacterCalcComponent::GetAlterRate() const {
    return 0.0f;
}

