#pragma once
#include "CoreMinimal.h"
#include "VGBRResultParam.h"
#include "VGNetworkResult.h"
#include "VGBRResult.generated.h"

class UDataTable;
class UVGWidget;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGBRResult : public UVGNetworkResult {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_hero_struggle_setting_table;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVGWidget*> m_scores;
    
public:
    UVGBRResult();

    UFUNCTION(BlueprintCallable)
    void SetResultParameters(const FVGBRResultParam& param);
    
    UFUNCTION(BlueprintCallable)
    bool IsExitOk();
    
};

