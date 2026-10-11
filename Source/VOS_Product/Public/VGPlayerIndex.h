#pragma once
#include "CoreMinimal.h"
#include "VGPlayerIndex.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGPlayerIndex {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_value;
    
public:
    FVGPlayerIndex();
};

