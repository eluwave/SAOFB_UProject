#pragma once
#include "CoreMinimal.h"
#include "VGAnimNotifyState.h"
#include "VGWireHitBranch.h"
#include "VGANSWireHitBranch.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class VOS_PRODUCT_API UVGANSWireHitBranch : public UVGAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGWireHitBranch> conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 early_frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float early_time;
    
public:
    UVGANSWireHitBranch();

};

