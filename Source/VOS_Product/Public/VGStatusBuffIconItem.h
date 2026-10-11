#pragma once
#include "CoreMinimal.h"
#include "EVGStatusBuff.h"
#include "VGTextSymbol.h"
#include "VGStatusBuffIconItem.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FVGStatusBuffIconItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGStatusBuff Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* icon_texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol log_text;
    
    VOS_PRODUCT_API FVGStatusBuffIconItem();
};

