#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "VGTextSymbol.h"
#include "VGMovieItemEntry.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGMovieItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* thumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference sequence_reference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol gallery_title;
    
    FVGMovieItemEntry();
};

