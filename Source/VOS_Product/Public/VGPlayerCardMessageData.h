#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGPlayerCardMessageData.generated.h"

USTRUCT(BlueprintType)
struct FVGPlayerCardMessageData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool colmun1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool colmun2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool colmun3;
    
    VOS_PRODUCT_API FVGPlayerCardMessageData();
};

