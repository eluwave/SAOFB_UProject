#pragma once
#include "CoreMinimal.h"
#include "EVGSkillType.h"
#include "VGSkillSlot.generated.h"

class UVGSkillAsset;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSkillSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGSkillType m_slot_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UVGSkillAsset*> m_slots;
    
public:
    FVGSkillSlot();
};

