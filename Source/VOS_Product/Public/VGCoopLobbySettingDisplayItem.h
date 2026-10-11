#pragma once
#include "CoreMinimal.h"
#include "VGCoopLobbySettingDisplayItem.generated.h"

class UVGCoopLobbySettingDisplayItemAsset;

USTRUCT(BlueprintType)
struct FVGCoopLobbySettingDisplayItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlatformType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGCoopLobbySettingDisplayItemAsset* ItemAsset;
    
    VOS_PRODUCT_API FVGCoopLobbySettingDisplayItem();
};

