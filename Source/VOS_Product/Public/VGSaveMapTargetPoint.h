#pragma once
#include "CoreMinimal.h"

#include "VGSaveMapTargetPoint.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSaveMapTargetPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName map_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector target_point;
    
    FVGSaveMapTargetPoint();
};

