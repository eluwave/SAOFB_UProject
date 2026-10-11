#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVGPlatformOptionPageType.h"
#include "VGSteamOptionItem.h"
#include "VGTextSymbol.h"
#include "VGPlatformOptionPage.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGPlatformOptionPage : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGPlatformOptionPageType page_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol page_caption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSteamOptionItem> Items;
    
    FVGPlatformOptionPage();
};

