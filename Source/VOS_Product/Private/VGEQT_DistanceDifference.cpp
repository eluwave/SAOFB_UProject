#include "VGEQT_DistanceDifference.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
UVGEQT_DistanceDifference::UVGEQT_DistanceDifference() {
    this->m_distance_from = UEnvQueryContext_Querier::StaticClass();
    this->m_filter = UVGEQT_DistanceDifferenceFilter::Off;
}

