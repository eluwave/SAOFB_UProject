#pragma once
#include "CoreMinimal.h"
#include "EVGCharaUnique.h"
#include "VGAfasysFriendMessage.generated.h"

USTRUCT(BlueprintType)
struct FVGAfasysFriendMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGCharaUnique> chara_ids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> seconds;
    
    VOS_PRODUCT_API FVGAfasysFriendMessage();
};

