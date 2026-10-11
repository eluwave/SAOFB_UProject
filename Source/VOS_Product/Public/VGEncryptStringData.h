#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGEncryptStringData.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGEncryptStringData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString String;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Data;
    
    FVGEncryptStringData();
};

