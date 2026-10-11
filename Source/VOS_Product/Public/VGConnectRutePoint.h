#pragma once
#include "CoreMinimal.h"
#include "VGConnectRutePoint.generated.h"

USTRUCT(BlueprintType)
struct FVGConnectRutePoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float percent;
    
    VOS_PRODUCT_API FVGConnectRutePoint();
};

