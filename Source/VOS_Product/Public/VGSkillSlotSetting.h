#pragma once
#include "CoreMinimal.h"
#include "VGSkillGuid.h"
#include "VGSkillSlotSetting.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSkillSlotSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSkillGuid> m_skill_slot;
    
    FVGSkillSlotSetting();
};

