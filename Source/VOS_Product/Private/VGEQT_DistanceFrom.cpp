#include "VGEQT_DistanceFrom.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
UVGEQT_DistanceFrom::UVGEQT_DistanceFrom() {
    this->m_distance_from = UEnvQueryContext_Querier::StaticClass();
    this->m_only_explorer = false;
}

