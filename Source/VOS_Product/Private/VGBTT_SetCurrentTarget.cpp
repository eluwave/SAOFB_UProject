#include "VGBTT_SetCurrentTarget.h"

UVGBTT_SetCurrentTarget::UVGBTT_SetCurrentTarget() {
    this->NodeName = TEXT("VGBTT SetCurrentTarget");
    this->m_target_select_type = EVGBTTargetSelectType::None;
    this->m_target_type = EVGBTActorTargetBB::AttackTarget;
    this->m_target_team = EVGBTTargetTeam::Enemy;
    this->m_target_role = EVGBTTargetRole::All;
    this->m_target_rule = EVGBTTargetRule::Hate1st;
    this->m_output_aic = true;
    this->m_output_bb = false;
}

