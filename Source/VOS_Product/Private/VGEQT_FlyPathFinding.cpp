#include "VGEQT_FlyPathFinding.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
UVGEQT_FlyPathFinding::UVGEQT_FlyPathFinding() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->m_test_mode = EVGBTFlyPathFindingTestMode::PathExist;
    this->m_self_target = UEnvQueryContext_Querier::StaticClass();
    this->m_time_slice_max_trace = 10;
    this->m_time_slice_num = 2;
}

void UVGEQT_FlyPathFinding::Pathfinding_OnFinish(const FDoNNavigationQueryData& Data) {
}

