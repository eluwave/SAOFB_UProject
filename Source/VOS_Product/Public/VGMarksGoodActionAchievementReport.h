#pragma once
#include "CoreMinimal.h"
#include "VGMarksReport.h"
#include "VGMarksGoodActionAchievementReport.generated.h"

USTRUCT(BlueprintType)
struct FVGMarksGoodActionAchievementReport : public FVGMarksReport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float achievement_time;
    
    VOS_PRODUCT_API FVGMarksGoodActionAchievementReport();
};

