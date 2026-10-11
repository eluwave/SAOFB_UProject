#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGHexagonRadarChart.generated.h"

class UImage;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHexagonRadarChart : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SizeRate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_hexagon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_material_instance_dynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> m_chart_rate;
    
public:
    UVGHexagonRadarChart();

    UFUNCTION(BlueprintCallable)
    void SetSizeRate(float InSizeRate);
    
};

