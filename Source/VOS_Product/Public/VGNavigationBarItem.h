#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "Engine/DataTable.h"
#include "VGTextSymbol.h"
#include "VGNavigationBarItem.generated.h"

USTRUCT(BlueprintType)
struct FVGNavigationBarItem : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol display_text_symbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> image_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Disabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference icon_override;
    
    VOS_PRODUCT_API FVGNavigationBarItem();
};

