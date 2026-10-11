#pragma once
#include "CoreMinimal.h"
#include "VGPlayerCardCustomizeData.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGPlayerCardCustomizeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 badge_id;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint16> codename_id;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint16> comment_id;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 player_poze_id;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 afasys_poze_id;
    
    FVGPlayerCardCustomizeData();
};

