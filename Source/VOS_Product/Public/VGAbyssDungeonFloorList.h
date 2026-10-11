#pragma once
#include "CoreMinimal.h"
#include "VGAbyssBossFloor.h"
#include "VGAbyssDungeonFloor.h"
#include "VGAbyssDungeonFloorList.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAbyssDungeonFloorList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAbyssDungeonFloor> DungeonFloors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAbyssBossFloor BossFloor;
    
    FVGAbyssDungeonFloorList();
};

