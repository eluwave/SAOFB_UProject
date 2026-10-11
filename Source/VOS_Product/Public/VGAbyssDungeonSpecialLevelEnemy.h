#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGAbyssDungeonSpecialLevelEnemy.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAbyssDungeonSpecialLevelEnemy : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 add_level;
    
    FVGAbyssDungeonSpecialLevelEnemy();
};

