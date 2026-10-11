#pragma once
#include "CoreMinimal.h"
#include "VGPlaySlotId.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGPlaySlotId {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_value;
    
public:
    FVGPlaySlotId();
};

