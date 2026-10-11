#pragma once
#include "CoreMinimal.h"
#include "EVGActionEventState.h"
#include "VGAnimNotifyState.h"
#include "VGANSActionState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class VOS_PRODUCT_API UVGANSActionState : public UVGAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EVGActionEventState::Type>> state_codes;
    
    UVGANSActionState();

};

