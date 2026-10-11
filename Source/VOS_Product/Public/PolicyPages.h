#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "PolicyPages.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPolicyPages {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText policy_memo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText policy_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText policy_text_us;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReference> policy_pages_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> policy_pages;
    
    VOS_PRODUCT_API FPolicyPages();
};

