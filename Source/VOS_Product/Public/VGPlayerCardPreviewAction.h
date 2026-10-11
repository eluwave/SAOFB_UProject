#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "VGPlayerCardPreviewAction.generated.h"

class UVGActionLibrary;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGPlayerCardPreviewAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference action_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGActionLibrary* action_library;
    
    FVGPlayerCardPreviewAction();
};

