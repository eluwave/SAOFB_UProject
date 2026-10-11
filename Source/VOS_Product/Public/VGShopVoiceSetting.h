#pragma once
#include "CoreMinimal.h"
#include "VGShopVoiceSetting.generated.h"

USTRUCT(BlueprintType)
struct FVGShopVoiceSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> cue_id_list;
    
    VOS_PRODUCT_API FVGShopVoiceSetting();
};

