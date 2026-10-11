#pragma once
#include "CoreMinimal.h"
#include "EVGQuestTaskGroup.h"
#include "VGQuestTask.h"
#include "VGQuestTaskGroup.generated.h"

USTRUCT(BlueprintType)
struct FVGQuestTaskGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGQuestTaskGroup::Type> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FVGQuestTask> tasks;
    
    VOS_PRODUCT_API FVGQuestTaskGroup();
};

