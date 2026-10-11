#include "VGWeaponPreviewActor.h"
#include "VGMeshMaterialOverrideManagerTicker.h"

AVGWeaponPreviewActor::AVGWeaponPreviewActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_load_delay_time = 0.25f;
    this->m_view_extent_width = 100.00f;
    this->m_view_extent_height = 100.00f;
    this->m_view_range_rate = 100.00f;
    this->m_actor_component = NULL;
    this->m_mmo_ticker = CreateDefaultSubobject<UVGMeshMaterialOverrideManagerTicker>(TEXT("MaterialTicker"));
}

