#pragma once
#include "CoreMinimal.h"
#include "VGSaveAvatarItemIdBlock.generated.h"

USTRUCT(BlueprintType)
struct FVGSaveAvatarItemIdBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Category;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 index;
    
    VOS_PRODUCT_API FVGSaveAvatarItemIdBlock();
};

