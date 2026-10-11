#pragma once
#include "CoreMinimal.h"
#include "VGBattleTalkConversation.h"
#include "VGBattleTalkSpeaker.h"
#include "VGBattleTalkGroup.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGBattleTalkGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName group_name;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGBattleTalkSpeaker> speakers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float probability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 required_member_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGBattleTalkConversation> conversation;
    
    FVGBattleTalkGroup();
};

