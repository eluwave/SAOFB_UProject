#pragma once
#include "CoreMinimal.h"
#include "VGSkillGuid.h"
#include "VGSaveSkillSettingLayer.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSaveSkillSettingLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSkillGuid> skills;
    
    FVGSaveSkillSettingLayer();
};

