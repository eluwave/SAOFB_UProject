#pragma once
#include "CoreMinimal.h"
#include "VGMapObjectData.h"
#include "VGMapIconObjectInfo.generated.h"

USTRUCT(BlueprintType)
struct FVGMapIconObjectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGMapObjectData object_data;
    
    VOS_PRODUCT_API FVGMapIconObjectInfo();
};

