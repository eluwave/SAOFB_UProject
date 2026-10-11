#pragma once
#include "CoreMinimal.h"
#include "Binding/PropertyBinding.h"
#include "VGTextSymbol.h"
#include "VGTextSymbolBinding.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGTextSymbolBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UVGTextSymbolBinding();

    UFUNCTION(BlueprintCallable)
    FVGTextSymbol GetSymbolValue() const;
    
};

