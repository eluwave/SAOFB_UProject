#pragma once
#include "CoreMinimal.h"
#include "EVGGuidedMissileMode.h"
#include "VGAnimNotify.h"
#include "VGANChangeMissileMode.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class VOS_PRODUCT_API UVGANChangeMissileMode : public UVGAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGGuidedMissileMode m_mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_interval;
    
    UVGANChangeMissileMode();

};

