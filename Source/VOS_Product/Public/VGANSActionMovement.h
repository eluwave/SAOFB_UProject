#pragma once
#include "CoreMinimal.h"

#include "EVGActMoveOp.h"
#include "EVGActMoveType.h"
#include "VGAnimNotifyState.h"
#include "VGANSActionMovement.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class VOS_PRODUCT_API UVGANSActionMovement : public UVGAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGActMoveType move_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGActMoveOp move_op;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector move_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_reset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_inertia;
    
    UVGANSActionMovement();

};

