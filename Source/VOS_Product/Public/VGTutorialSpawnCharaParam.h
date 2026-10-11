#pragma once
#include "CoreMinimal.h"
#include "EVGCharaUnique.h"
#include "VGTutorialSpawnCharaParam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGTutorialSpawnCharaParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaUnique chara_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> disable_spawn_progress_id;
    
    FVGTutorialSpawnCharaParam();
};

