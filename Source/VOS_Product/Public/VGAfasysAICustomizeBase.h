#pragma once
#include "CoreMinimal.h"
#include "VGTextSymbol.h"
#include "VGAfasysAICustomizeBase.generated.h"

USTRUCT(BlueprintType)
struct FVGAfasysAICustomizeBase {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Name;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Message;
    
    VOS_PRODUCT_API FVGAfasysAICustomizeBase();
};

