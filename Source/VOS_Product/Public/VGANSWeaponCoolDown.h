#pragma once
#include "CoreMinimal.h"
#include "VGAnimNotifyState.h"
#include "VGANSWeaponCoolDown.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class VOS_PRODUCT_API UVGANSWeaponCoolDown : public UVGAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float value;
    
public:
    UVGANSWeaponCoolDown();

};

