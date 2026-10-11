#include "VGEQG_ProjectedHex.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
UVGEQG_ProjectedHex::UVGEQG_ProjectedHex() {
    this->QuerierContext = NULL;
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
    this->AddClosestPoint = false;
}

