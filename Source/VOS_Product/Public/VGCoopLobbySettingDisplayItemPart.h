#pragma once
#include "CoreMinimal.h"
#include "EVGCoopLobbySettingItemModeType.h"
#include "VGTextSymbol.h"
#include "VGCoopLobbySettingDisplayItemPart.generated.h"

USTRUCT(BlueprintType)
struct FVGCoopLobbySettingDisplayItemPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCoopLobbySettingItemModeType ModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCheckUGC;
    
    VOS_PRODUCT_API FVGCoopLobbySettingDisplayItemPart();
};

