#pragma once
#include "CoreMinimal.h"
#include "VGSaveSkillSettingLayer.h"
#include "VGSaveSkillSetting.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSaveSkillSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSaveSkillSettingLayer> layers;
    
    FVGSaveSkillSetting();
};

