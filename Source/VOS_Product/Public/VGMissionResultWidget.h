#pragma once
#include "CoreMinimal.h"
#include "VGMissionResultParam.h"
#include "VGNetworkResult.h"
#include "VGMissionResultWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGMissionResultWidget : public UVGNetworkResult {
    GENERATED_BODY()
public:
    UVGMissionResultWidget();

    UFUNCTION(BlueprintCallable)
    void SetResultParameters(const FVGMissionResultParam& param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetNewRecordFlag(bool IsNewRecord);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetClearTime(float Secs);
    
};

