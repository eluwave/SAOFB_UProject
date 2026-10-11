#pragma once
#include "CoreMinimal.h"
#include "VGMarksReport.h"
#include "VGMarksGoodActionFormingReport.generated.h"

USTRUCT(BlueprintType)
struct FVGMarksGoodActionFormingReport : public FVGMarksReport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float forming_time;
    
    VOS_PRODUCT_API FVGMarksGoodActionFormingReport();
};

