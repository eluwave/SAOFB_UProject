#pragma once
#include "CoreMinimal.h"
#include "VGTransitionDescBP.h"
#include "VGAbyssDungeonTransitionDescBP.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAbyssDungeonTransitionDescBP : public FVGTransitionDescBP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 const_order;
    
    FVGAbyssDungeonTransitionDescBP();
};

