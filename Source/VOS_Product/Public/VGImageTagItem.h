#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGImageTagItem.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGImageTagItem : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InlineImageID;
    
    FVGImageTagItem();
};

