#pragma once
#include "CoreMinimal.h"
#include "VGSkillSlotSetting.h"
#include "VGSkillSetting.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSkillSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSkillSlotSetting> m_skill_layer;
    
    FVGSkillSetting();
};

