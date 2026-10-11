#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGStatusRadarChart.generated.h"

class UVGHexagonRadarChart;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGStatusRadarChart : public UVGWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGHexagonRadarChart* m_hexagon_chart;
    
public:
    UVGStatusRadarChart();

};

