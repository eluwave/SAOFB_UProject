#pragma once
#include "CoreMinimal.h"
#include "EVGBattleTalkSpeaker.h"
#include "EVGCharaGender.h"
#include "VGBattleTalkSpeaker.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGBattleTalkSpeaker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBattleTalkSpeaker speaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaGender gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Type;
    
    FVGBattleTalkSpeaker();
};

