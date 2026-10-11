#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EVGCoopLobbySettingItemType.h"
#include "VGCoopLobbySettingDisplayItemPart.h"
#include "VGTextSymbol.h"
#include "VGCoopLobbySettingDisplayItemAsset.generated.h"

UCLASS(Blueprintable)
class UVGCoopLobbySettingDisplayItemAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCoopLobbySettingItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDefaultTail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGCoopLobbySettingDisplayItemPart> Items;
    
    UVGCoopLobbySettingDisplayItemAsset();

};

