#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGReplaceStringData.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGReplaceStringData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Src;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Dst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> SrcData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> DstData;
    
    FVGReplaceStringData();
};

