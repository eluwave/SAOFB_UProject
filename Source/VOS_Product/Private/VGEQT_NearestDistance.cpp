#include "VGEQT_NearestDistance.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
UVGEQT_NearestDistance::UVGEQT_NearestDistance() {
    this->m_move_from = UEnvQueryContext_Querier::StaticClass();
    this->m_distance_to = UEnvQueryContext_Querier::StaticClass();
    this->m_self_radius = false;
    this->m_target_radius = false;
}

