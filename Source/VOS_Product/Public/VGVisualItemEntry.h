#pragma once
#include "CoreMinimal.h"
#include "VGTextSymbol.h"
#include "VGVisualItemEntry.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGVisualItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* thumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol gallery_title;
    
    FVGVisualItemEntry();
};

