#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGPlayerCardBadgeData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FVGPlayerCardBadgeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 progress;
    
    VOS_PRODUCT_API FVGPlayerCardBadgeData();
};

