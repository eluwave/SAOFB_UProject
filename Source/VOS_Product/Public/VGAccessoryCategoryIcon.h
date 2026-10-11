#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVGAccessoryCategory.h"
#include "VGAccessoryCategoryIcon.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAccessoryCategoryIcon : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGAccessoryCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    FVGAccessoryCategoryIcon();
};

