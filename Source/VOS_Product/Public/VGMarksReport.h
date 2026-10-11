#pragma once
#include "CoreMinimal.h"
#include "EVGMarksReportType.h"
#include "VGMarksReport.generated.h"

USTRUCT(BlueprintType)
struct FVGMarksReport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGMarksReportType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float game_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 owner_chara_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 target_chara_id;
    
    VOS_PRODUCT_API FVGMarksReport();
};

