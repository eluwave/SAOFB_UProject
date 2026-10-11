#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVGOptionPageType.h"
#include "VGOptionItem.h"
#include "VGTextSymbol.h"
#include "VGOptionPage.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGOptionPage : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGOptionPageType page_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol page_caption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol page_caption_ps4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol page_caption_xb1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGOptionItem> Items;
    
    FVGOptionPage();
};

