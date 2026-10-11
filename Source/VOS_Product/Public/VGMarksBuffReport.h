#pragma once
#include "CoreMinimal.h"
#include "VGMarksReport.h"
#include "VGStatusBuff.h"
#include "VGMarksBuffReport.generated.h"

USTRUCT(BlueprintType)
struct FVGMarksBuffReport : public FVGMarksReport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGStatusBuff buff;
    
    VOS_PRODUCT_API FVGMarksBuffReport();
};

