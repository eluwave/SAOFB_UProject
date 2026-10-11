#pragma once
#include "CoreMinimal.h"
#include "VGTextSymbol.h"
#include "VGMainMenuListItemInfo.generated.h"

class UVGMainMenuListSetting;

USTRUCT(BlueprintType)
struct FVGMainMenuListItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol ListTextSymbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol NaviTextSymbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGMainMenuListSetting* NextList;
    
    VOS_PRODUCT_API FVGMainMenuListItemInfo();
};

