#include "VGEQG_PathingGrid3d.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"
UVGEQG_PathingGrid3d::UVGEQG_PathingGrid3d() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
}

