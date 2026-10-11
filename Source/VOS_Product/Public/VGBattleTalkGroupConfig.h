#pragma once
#include "CoreMinimal.h"
#include "EVGBattleTalkMainSpeaker.h"
#include "VGBattleTalkGroupConfig.generated.h"

class UVGBattleTalkHeader;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGBattleTalkGroupConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName group_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGBattleTalkHeader* Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBattleTalkMainSpeaker speaker;
    
    FVGBattleTalkGroupConfig();
};

