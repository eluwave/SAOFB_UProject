#pragma once
#include "CoreMinimal.h"
#include "VGHeroStruggleCharaUniqueData.h"
#include "VGHeroStruggleCharaIconMoveInfo.generated.h"

USTRUCT(BlueprintType)
struct FVGHeroStruggleCharaIconMoveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGHeroStruggleCharaUniqueData Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGHeroStruggleCharaUniqueData Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGHeroStruggleCharaUniqueData Up;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGHeroStruggleCharaUniqueData Down;
    
    VOS_PRODUCT_API FVGHeroStruggleCharaIconMoveInfo();
};

