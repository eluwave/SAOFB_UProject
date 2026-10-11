#pragma once
#include "CoreMinimal.h"
#include "VGMarksReport.h"
#include "VGMarksHealReport.generated.h"

USTRUCT(BlueprintType)
struct FVGMarksHealReport : public FVGMarksReport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float heal_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_clear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_revival;
    
    VOS_PRODUCT_API FVGMarksHealReport();
};

