#pragma once
#include "CoreMinimal.h"
#include "VGTextSymbol.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGTextSymbol {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName uid;
    
    FVGTextSymbol();
};

