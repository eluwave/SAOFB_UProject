#pragma once
#include "CoreMinimal.h"
#include "VGDataLoadMenuItem.generated.h"

USTRUCT(BlueprintType)
struct FVGDataLoadMenuItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_enable;
    
    VOS_PRODUCT_API FVGDataLoadMenuItem();
};

