#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGTextSymbol.h"
#include "VGGalleryVisualSetting.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FVGGalleryVisualSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* thumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol gallery_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 progress;
    
    VOS_PRODUCT_API FVGGalleryVisualSetting();
};

