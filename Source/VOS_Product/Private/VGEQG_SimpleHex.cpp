#include "VGEQG_SimpleHex.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
UVGEQG_SimpleHex::UVGEQG_SimpleHex() {
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
    this->AddClosestPoint = false;
}

