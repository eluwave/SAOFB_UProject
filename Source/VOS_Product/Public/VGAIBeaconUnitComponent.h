#pragma once
#include "CoreMinimal.h"
#include "VGAIBeaconUnitParam.h"
#include "VGAIUnitComponent.h"
#include "VGAIBeaconUnitComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGAIBeaconUnitComponent : public UVGAIUnitComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAIBeaconUnitParam m_beacon_param;
    
public:
    UVGAIBeaconUnitComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBeaconParam(const FVGAIBeaconUnitParam& param);
    
};

