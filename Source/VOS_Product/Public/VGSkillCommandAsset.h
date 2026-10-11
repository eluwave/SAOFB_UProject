#pragma once
#include "CoreMinimal.h"
#include "VGCommandAsset.h"
#include "VGSkillCommandAsset.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGSkillCommandAsset : public UVGCommandAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_skill;
    
public:
    UVGSkillCommandAsset();

};

