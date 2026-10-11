#pragma once
#include "CoreMinimal.h"
#include "VGAfasysMenuMessage.h"
#include "VGAfasysProposalReportConditions.h"
#include "VGAfasysProposalReport.generated.h"

USTRUCT(BlueprintType)
struct FVGAfasysProposalReport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysProposalReportConditions> conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysMenuMessage> start_messages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysMenuMessage> end_messages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> item_ids;
    
    VOS_PRODUCT_API FVGAfasysProposalReport();
};

