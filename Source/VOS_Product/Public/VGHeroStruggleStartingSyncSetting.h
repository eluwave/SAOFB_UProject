#pragma once
#include "CoreMinimal.h"
#include "VGHeroStruggleStartingSyncSetting.generated.h"

USTRUCT(BlueprintType)
struct FVGHeroStruggleStartingSyncSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_checked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_starting_member;
    
    VOS_PRODUCT_API FVGHeroStruggleStartingSyncSetting();
};

