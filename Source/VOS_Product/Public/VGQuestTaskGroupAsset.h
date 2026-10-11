#pragma once
#include "CoreMinimal.h"
#include "EVGQuestTaskGroup.h"
#include "VGQuestTaskAsset.h"
#include "VGQuestTaskGroupAsset.generated.h"

USTRUCT(BlueprintType)
struct FVGQuestTaskGroupAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGQuestTaskGroup::Type> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGQuestTaskAsset> tasks;
    
    VOS_PRODUCT_API FVGQuestTaskGroupAsset();
};

