#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGAbyssDungeonSubQuestParam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAbyssDungeonSubQuestParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString dungeon_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_occur_sub_quest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 defeat_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 reward_exp;
    
    FVGAbyssDungeonSubQuestParam();
};

