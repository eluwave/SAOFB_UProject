#pragma once
#include "CoreMinimal.h"
#include "VGMarksReport.h"
#include "VGMarksSkillReport.generated.h"

class UVGSkillAsset;

USTRUCT(BlueprintType)
struct FVGMarksSkillReport : public FVGMarksReport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGSkillAsset* Asset;
    
    VOS_PRODUCT_API FVGMarksSkillReport();
};

