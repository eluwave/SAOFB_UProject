#pragma once
#include "CoreMinimal.h"
#include "VGTextSymbol.h"
#include "VGRoamNpcFlagMessageData.generated.h"

USTRUCT(BlueprintType)
struct FVGRoamNpcFlagMessageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol message_id;
    
    VOS_PRODUCT_API FVGRoamNpcFlagMessageData();
};

