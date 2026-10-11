#pragma once
#include "CoreMinimal.h"
#include "VGMyRoomLevelCondition.generated.h"

USTRUCT(BlueprintType)
struct FVGMyRoomLevelCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString level_name;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 required_flag;
    
    VOS_PRODUCT_API FVGMyRoomLevelCondition();
};

