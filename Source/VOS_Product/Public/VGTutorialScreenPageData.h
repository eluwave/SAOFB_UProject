#pragma once
#include "CoreMinimal.h"
#include "VGTextSymbol.h"
#include "VGTutorialScreenPageData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FVGTutorialScreenPageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Image;
    
    VOS_PRODUCT_API FVGTutorialScreenPageData();
};

