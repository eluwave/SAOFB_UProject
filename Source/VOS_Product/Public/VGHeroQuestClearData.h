#pragma once
#include "CoreMinimal.h"
#include "VGSaveClearTimeBlock.h"
#include "VGHeroQuestClearData.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGHeroQuestClearData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 best_record;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 best_record_chara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSaveClearTimeBlock> clear_info;
    
    FVGHeroQuestClearData();
};

