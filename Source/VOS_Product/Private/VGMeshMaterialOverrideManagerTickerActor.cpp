#include "VGMeshMaterialOverrideManagerTickerActor.h"
#include "VGMeshMaterialOverrideManagerTicker.h"

AVGMeshMaterialOverrideManagerTickerActor::AVGMeshMaterialOverrideManagerTickerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ticker = CreateDefaultSubobject<UVGMeshMaterialOverrideManagerTicker>(TEXT("Ticker"));
}

