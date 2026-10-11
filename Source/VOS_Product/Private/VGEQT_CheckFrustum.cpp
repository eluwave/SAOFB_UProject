#include "VGEQT_CheckFrustum.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
UVGEQT_CheckFrustum::UVGEQT_CheckFrustum() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->m_camera_actor = UEnvQueryContext_Querier::StaticClass();
    this->m_self_actor = UEnvQueryContext_Querier::StaticClass();
}

