#pragma once
#include "CoreMinimal.h"
#include "VGLoadingTipsPageDataEntry.generated.h"

USTRUCT(BlueprintType)
struct FVGLoadingTipsPageDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 flag_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ids;
    
    VOS_PRODUCT_API FVGLoadingTipsPageDataEntry();
};

