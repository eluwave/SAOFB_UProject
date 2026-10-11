#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VGMeshMaterialOverrideManagerTickerActor.generated.h"

class UVGMeshMaterialOverrideManagerTicker;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGMeshMaterialOverrideManagerTickerActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGMeshMaterialOverrideManagerTicker* m_ticker;
    
public:
    AVGMeshMaterialOverrideManagerTickerActor(const FObjectInitializer& ObjectInitializer);

};

