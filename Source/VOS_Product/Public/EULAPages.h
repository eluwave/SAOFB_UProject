#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "EULAPages.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FEULAPages {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText eula_memo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText eula_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReference> eula_pages_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> eula_pages;
    
    VOS_PRODUCT_API FEULAPages();
};

