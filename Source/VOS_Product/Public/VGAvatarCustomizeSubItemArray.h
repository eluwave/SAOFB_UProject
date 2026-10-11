#pragma once
#include "CoreMinimal.h"
#include "VGAvatarCustomizeSubItem.h"
#include "VGAvatarCustomizeSubItemArray.generated.h"

USTRUCT(BlueprintType)
struct FVGAvatarCustomizeSubItemArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAvatarCustomizeSubItem> SubItems;
    
    VOS_PRODUCT_API FVGAvatarCustomizeSubItemArray();
};

