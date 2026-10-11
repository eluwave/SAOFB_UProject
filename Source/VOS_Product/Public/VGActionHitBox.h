#pragma once
#include "CoreMinimal.h"
#include "VGActionHitBox.generated.h"

class AVGHitBox;

USTRUCT(BlueprintType)
struct FVGActionHitBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGHitBox* hitbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 group_id;
    
    VOS_PRODUCT_API FVGActionHitBox();
};

