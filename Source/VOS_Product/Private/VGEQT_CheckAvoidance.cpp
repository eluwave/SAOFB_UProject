#include "VGEQT_CheckAvoidance.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
UVGEQT_CheckAvoidance::UVGEQT_CheckAvoidance() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->m_self_context = UEnvQueryContext_Querier::StaticClass();
    this->m_target_context = UEnvQueryContext_Querier::StaticClass();
    this->m_self_radius = true;
    this->m_target_radius = true;
}

