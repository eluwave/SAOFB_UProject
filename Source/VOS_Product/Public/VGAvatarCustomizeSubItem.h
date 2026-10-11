#pragma once
#include "CoreMinimal.h"

#include "VGAvatarCustomizeSubItem.generated.h"

USTRUCT(BlueprintType)
struct FVGAvatarCustomizeSubItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScalarValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Checked;
    
    VOS_PRODUCT_API FVGAvatarCustomizeSubItem();
};

