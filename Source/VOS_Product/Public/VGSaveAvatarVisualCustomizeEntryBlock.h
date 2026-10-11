#pragma once
#include "CoreMinimal.h"
#include "VGSaveAvatarVisualCustomizeEntryBlock.generated.h"

USTRUCT(BlueprintType)
struct FVGSaveAvatarVisualCustomizeEntryBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString palette;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 element_id;
    
    VOS_PRODUCT_API FVGSaveAvatarVisualCustomizeEntryBlock();
};

