#include "VGBTT_SetMovementRule.h"

UVGBTT_SetMovementRule::UVGBTT_SetMovementRule() {
    this->NodeName = TEXT("VG SetMovementRule");
    this->m_rule = EVGBTMovementRule::Stop;
    this->m_target = EVGBTLocationTargetBB::MoveTarget;
    this->m_distance = 100.00f;
    this->m_distance_random = 0.00f;
    this->m_target_radius = false;
    this->m_self_radius = false;
    this->m_angle = 0.00f;
    this->m_angle_random = 0.00f;
    this->m_rule_in_air = EVGBTMovementRuleInAir::ChangeAtLanding;
}

EBTNodeResult::Type UVGBTT_SetMovementRule::OnPostExecuteTask_Implementation(UBlackboardComponent* Blackboard) {
    return EBTNodeResult::Succeeded;
}

