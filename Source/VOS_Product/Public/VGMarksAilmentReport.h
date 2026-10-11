#pragma once
#include "CoreMinimal.h"
#include "VGMarksReport.h"
#include "VGStatusAilment.h"
#include "VGMarksAilmentReport.generated.h"

USTRUCT(BlueprintType)
struct FVGMarksAilmentReport : public FVGMarksReport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGStatusAilment ailment;
    
    VOS_PRODUCT_API FVGMarksAilmentReport();
};

