#pragma once
#include "CoreMinimal.h"
#include "VGAvatarCustomizeSubItem.h"
#include "VGColorCoordinateItem.generated.h"

USTRUCT(BlueprintType)
struct FVGColorCoordinateItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText display_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAvatarCustomizeSubItem> SubItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 subIndex;
    
    VOS_PRODUCT_API FVGColorCoordinateItem();
};

