#include "VGAIUnitSearch.h"

FVGAIUnitSearch::FVGAIUnitSearch() {
    this->m_target_team = (EVGBTTargetTeam)0;
    this->m_target_role = EVGBTTargetRole::All;
    this->m_target_rule_none = false;
    this->m_target_rule = EVGBTTargetRule::None;
}

