#pragma once
#include "CoreMinimal.h"
#include "VGAnimNotify.h"
#include "VGANPlayFacialAnimation.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, CollapseCategories)
class VOS_PRODUCT_API UVGANPlayFacialAnimation : public UVGAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> male_animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> female_animation;
    
    UVGANPlayFacialAnimation();

};

