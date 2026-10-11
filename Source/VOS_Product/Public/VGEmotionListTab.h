#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVGCharaGender.h"
#include "EVGEmotionListPageType.h"
#include "VGTextSymbol.h"
#include "VGEmotionListTab.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGEmotionListTab : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGEmotionListPageType page_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol page_caption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaGender gender;
    
    FVGEmotionListTab();
};

