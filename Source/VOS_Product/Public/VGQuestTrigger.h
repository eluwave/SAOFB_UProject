#pragma once
#include "CoreMinimal.h"
#include "EVGQuestOp.h"
#include "EVGQuestTrigger.h"
#include "VGQuestTrigger.generated.h"

USTRUCT(BlueprintType)
struct FVGQuestTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGQuestTrigger Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString param;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGQuestOp Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString value;
    
    VOS_PRODUCT_API FVGQuestTrigger();
};

