#pragma once
#include "CoreMinimal.h"
#include "VGInventoryEntryId.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGInventoryEntryId {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_value;
    
public:
    FVGInventoryEntryId();
};

