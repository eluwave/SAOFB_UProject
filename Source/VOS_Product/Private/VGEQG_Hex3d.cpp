#include "VGEQG_Hex3d.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"
UVGEQG_Hex3d::UVGEQG_Hex3d() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->QuerierContext = NULL;
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
}

