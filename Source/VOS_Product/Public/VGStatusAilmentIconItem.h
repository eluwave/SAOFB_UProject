#pragma once
#include "CoreMinimal.h"
#include "EVGStatusAilment.h"
#include "VGTextSymbol.h"
#include "VGStatusAilmentIconItem.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FVGStatusAilmentIconItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGStatusAilment Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* icon_texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol log_text;
    
    VOS_PRODUCT_API FVGStatusAilmentIconItem();
};

