#pragma once
#include "CoreMinimal.h"
#include "VGAIReportNoiseEvent.h"
#include "VGAnimNotify.h"
#include "VGANAIReportNoiseEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class VOS_PRODUCT_API UVGANAIReportNoiseEvent : public UVGAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAIReportNoiseEvent> m_events;
    
    UVGANAIReportNoiseEvent();

};

