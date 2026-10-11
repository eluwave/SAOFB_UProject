#pragma once
#include "CoreMinimal.h"
#include "VGTextSymbol.h"
#include "VGCoopVisualLobbyNavigationBarSetting.generated.h"

USTRUCT(BlueprintType)
struct FVGCoopVisualLobbyNavigationBarSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> NavItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Message;
    
    VOS_PRODUCT_API FVGCoopVisualLobbyNavigationBarSetting();
};

