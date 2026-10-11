#pragma once
#include "CoreMinimal.h"
#include "VGTipsDisplayInfo.generated.h"

USTRUCT(BlueprintType)
struct FVGTipsDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName name_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName flavor_text;
    
    VOS_PRODUCT_API FVGTipsDisplayInfo();
};

