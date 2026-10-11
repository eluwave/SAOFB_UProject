#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "VGTextSymbol.h"
#include "VGTextBlock.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_RetVal(FVGTextSymbol, FGetVGTextSymbol);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol TextSymbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetVGTextSymbol TextSymbolDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseTextSymbol;
    
    UVGTextBlock();

};

