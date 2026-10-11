#pragma once
#include "CoreMinimal.h"
#include "VGAbyssBossFloor.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAbyssBossFloor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FloorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSummonFriendEnemy;
    
    FVGAbyssBossFloor();
};

