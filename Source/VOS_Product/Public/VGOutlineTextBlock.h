#pragma once
#include "CoreMinimal.h"

#include "VGTextBlock.h"
#include "VGOutlineTextBlock.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGOutlineTextBlock : public UVGTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutlineSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor OutlineColor;
    
    UVGOutlineTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetOutlineSize(float InOutlineSize);
    
    UFUNCTION(BlueprintCallable)
    void SetOutlineColor(FLinearColor InOutlineColor);
    
};

