#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysReportConditions.h"
#include "VGAfasysProposalReportConditions.generated.h"

USTRUCT(BlueprintType)
struct FVGAfasysProposalReportConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysReportConditions::Type> Type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 value;
    
    VOS_PRODUCT_API FVGAfasysProposalReportConditions();
};

