#pragma once
#include "CoreMinimal.h"
#include "VGAnimNotify.h"
#include "VGANBossEventBranch.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class VOS_PRODUCT_API UVGANBossEventBranch : public UVGAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 progress_flag;
    
public:
    UVGANBossEventBranch();

};

