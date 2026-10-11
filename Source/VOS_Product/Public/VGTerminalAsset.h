#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGTerminalItem.h"
#include "VGTextSymbol.h"
#include "VGTerminalAsset.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGTerminalAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol display_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGTerminalItem> Items;
    
    UVGTerminalAsset();

};

