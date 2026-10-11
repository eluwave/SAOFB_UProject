#pragma once
#include "CoreMinimal.h"
#include "GadgetData.generated.h"

USTRUCT(BlueprintType)
struct FGadgetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> gadgets;
    
    VOS_PRODUCT_API FGadgetData();
};

