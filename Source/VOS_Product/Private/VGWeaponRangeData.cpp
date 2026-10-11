#include "VGWeaponRangeData.h"

FVGWeaponRangeData::FVGWeaponRangeData() {
    this->trigger_type = EVGWeaponTriggerType::None;
    this->bullet_type = EVGWeaponBulletType::HG_Bullet;
    this->cock_type = EVGWeaponCockType::Auto;
    this->bullet_damage_rate = 0.00f;
    this->weak_point_factor = 0.00f;
    this->fire_rate = 0;
    this->rpm = 0;
    this->range_effective = 0.00f;
    this->range_non_attenuation = 0.00f;
    this->range_attenuation = 0.00f;
    this->range_attenuation_rate = 0;
    this->range_effective_rate = 0;
    this->start_ADS_MIL = 0.00f;
    this->end_ADS_MIL = 0.00f;
    this->auto_MIL = 0.00f;
    this->recoil_increase = 0.00f;
    this->recoil_decrease = 0.00f;
    this->recoil_limit = 0.00f;
    this->recoil_increase_ADS = 0.00f;
    this->recoil_decrease_ADS = 0.00f;
    this->recoil_limit_ADS = 0.00f;
    this->reload_rate = 0.00f;
    this->aim_rate = 0.00f;
    this->lag_type = EVGWeaponLagType::Normal;
    this->lag_previous = 0.00f;
    this->lag_after = 0.00f;
    this->ammo = 0;
    this->force_feedback = 0;
    this->target_assist_enable = false;
    this->target_assist_effective_dist = 0.00f;
    this->target_assist_reticle_range = 0.00f;
    this->target_assist_lerp_rate = 0.00f;
    this->target_assist_frame = 0.00f;
    this->system_assist_width = 0;
    this->system_assist_height = 0;
    this->scope = false;
    this->scope_x = 0;
    this->heat_increase = 0.00f;
    this->heat_decrease = 0.00f;
    this->overheat_time = 0.00f;
}

