#pragma once
#include "CoreMinimal.h"
#include "EVGCharaUnique.h"
#include "VGHeroStruggleCharaUniqueData.generated.h"

USTRUCT(BlueprintType)
struct FVGHeroStruggleCharaUniqueData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaUnique chara_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 custmize_index;
    
    VOS_PRODUCT_API FVGHeroStruggleCharaUniqueData();
};

