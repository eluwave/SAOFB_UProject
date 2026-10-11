#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVGEmotionListPageType.h"
#include "VGTextSymbol.h"
#include "VGEmotionListItem.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGEmotionListItem : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGEmotionListPageType page_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol display_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 action_id;
    
    FVGEmotionListItem();
};

