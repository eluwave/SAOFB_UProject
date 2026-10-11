#pragma once
#include "CoreMinimal.h"
#include "VGSaveMapRecord.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSaveMapRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName map_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> mask_flag;
    
    FVGSaveMapRecord();
};

