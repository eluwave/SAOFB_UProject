#pragma once
#include "CoreMinimal.h"
#include "EVGQuestTaskGroup.h"
#include "VGSaveQuestTask.h"
#include "VGSaveQuestTaskGroup.generated.h"

USTRUCT(BlueprintType)
struct FVGSaveQuestTaskGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGQuestTaskGroup::Type> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSaveQuestTask> tasks;
    
    VOS_PRODUCT_API FVGSaveQuestTaskGroup();
};

