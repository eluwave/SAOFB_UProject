#pragma once
#include "CoreMinimal.h"
#include "VGSaveProgressFlag.generated.h"

USTRUCT(BlueprintType)
struct FVGSaveProgressFlag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> value;
    
    VOS_PRODUCT_API FVGSaveProgressFlag();
};

