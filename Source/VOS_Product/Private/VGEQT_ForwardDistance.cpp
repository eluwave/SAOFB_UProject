#include "VGEQT_ForwardDistance.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
UVGEQT_ForwardDistance::UVGEQT_ForwardDistance() {
    this->m_distance_from = UEnvQueryContext_Querier::StaticClass();
    this->m_target_to = NULL;
}

