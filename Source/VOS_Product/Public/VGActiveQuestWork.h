#pragma once
#include "CoreMinimal.h"
#include "VGActiveQuestWork.generated.h"

class UVGQuestRecord;

USTRUCT(BlueprintType)
struct FVGActiveQuestWork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVGQuestRecord> quest;
    
    VOS_PRODUCT_API FVGActiveQuestWork();
};

