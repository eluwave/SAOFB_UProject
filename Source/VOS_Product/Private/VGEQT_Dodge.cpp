#include "VGEQT_Dodge.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
UVGEQT_Dodge::UVGEQT_Dodge() {
    this->m_dodge_from = UEnvQueryContext_Querier::StaticClass();
    this->m_self_actor = NULL;
}

