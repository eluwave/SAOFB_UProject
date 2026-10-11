#pragma once
#include "CoreMinimal.h"
#include "VGAnimNotifyState.h"
#include "VGANSFringeIntensity.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class VOS_PRODUCT_API UVGANSFringeIntensity : public UVGAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName fringe_fcurve_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_local_user_only;
    
public:
    UVGANSFringeIntensity();

};

