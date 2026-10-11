#include "VGHudMiniMap.h"

UVGHudMiniMap::UVGHudMiniMap() {
    this->NormalRange = 0.00f;
    this->LongRange = 0.00f;
    this->HeightRange = 0.00f;
    this->HeightRangeLimit = 0.00f;
    this->IconMaterial = NULL;
    this->PlayerIcon = NULL;
    this->FriendIcon = NULL;
    this->EnemyIcon = NULL;
    this->MapIconSetting = NULL;
    this->m_location_data = NULL;
    this->m_VisibilityControlPanel = NULL;
    this->m_IconBasePanel = NULL;
    this->m_MapImage = NULL;
    this->m_MapPanel = NULL;
    this->m_MapBase = NULL;
    this->m_MapArw = NULL;
    this->m_MapArwAdd = NULL;
    this->m_MapTexture = NULL;
}

