#pragma once
#include "CoreMinimal.h"
#include "VGAnimNotifyState.h"
#include "VGANSActionInputRotate.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class VOS_PRODUCT_API UVGANSActionInputRotate : public UVGAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float rotate_per_sec;
    
    UVGANSActionInputRotate();

};

