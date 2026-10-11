#pragma once
#include "CoreMinimal.h"
#include "QuestWidgetItem.generated.h"

class UVGQuestAsset;
class UVGQuestRecord;

USTRUCT(BlueprintType)
struct FQuestWidgetItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGQuestRecord* record;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGQuestAsset* Asset;
    
    VOS_PRODUCT_API FQuestWidgetItem();
};

