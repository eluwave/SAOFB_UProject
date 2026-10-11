#pragma once
#include "CoreMinimal.h"
#include "SubQuestNames.generated.h"

USTRUCT(BlueprintType)
struct FSubQuestNames {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_sub_quests_name;
    
    VOS_PRODUCT_API FSubQuestNames();
};

