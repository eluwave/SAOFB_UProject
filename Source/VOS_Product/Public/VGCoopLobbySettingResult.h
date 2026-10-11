#pragma once
#include "CoreMinimal.h"
#include "EVGCoopLobbySettingItemType.h"
#include "VGCoopLobbySettingResult.generated.h"

USTRUCT(BlueprintType)
struct FVGCoopLobbySettingResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVGCoopLobbySettingItemType, int32> Values;
    
    VOS_PRODUCT_API FVGCoopLobbySettingResult();
};

