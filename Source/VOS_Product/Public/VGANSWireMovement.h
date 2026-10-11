#pragma once
#include "CoreMinimal.h"
#include "VGAnimNotifyState.h"
#include "VGWireMovementBranch.h"
#include "VGANSWireMovement.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class VOS_PRODUCT_API UVGANSWireMovement : public UVGAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGWireMovementBranch> conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
public:
    UVGANSWireMovement();

};

