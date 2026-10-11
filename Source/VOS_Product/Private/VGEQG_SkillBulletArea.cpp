#include "VGEQG_SkillBulletArea.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"
UVGEQG_SkillBulletArea::UVGEQG_SkillBulletArea() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->SearchCenter = UEnvQueryContext_Querier::StaticClass();
    this->m_search_recovery = true;
    this->m_search_buff = true;
}

