#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGLocalizeItem.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGLocalizeItem : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    FVGLocalizeItem();
};

