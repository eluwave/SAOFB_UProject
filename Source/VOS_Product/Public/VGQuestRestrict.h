#pragma once
#include "CoreMinimal.h"
#include "EVGQuestOp.h"
#include "EVGQuestRestrict.h"
#include "VGQuestRestrict.generated.h"

USTRUCT(BlueprintType)
struct FVGQuestRestrict {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGQuestRestrict::Type> Type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGQuestOp Op;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString value;
    
    VOS_PRODUCT_API FVGQuestRestrict();
};

