#pragma once
#include "CoreMinimal.h"
#include "Components/RetainerBox.h"
#include "VGMapMaskBox.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMapMaskBox : public URetainerBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MaskTexture;
    
    UVGMapMaskBox();

    UFUNCTION(BlueprintCallable)
    void SetMaskTexture(UTexture2D* InMaskTexture);
    
};

