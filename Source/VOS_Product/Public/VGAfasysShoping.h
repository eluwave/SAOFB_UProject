#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysMenuShoping.h"
#include "VGAfasysShopingBonus.h"
#include "VGTextSymbol.h"
#include "VGAfasysShoping.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAfasysShoping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysMenuShoping::Type> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 voice_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysShopingBonus> bonuss;
    
    FVGAfasysShoping();
};

