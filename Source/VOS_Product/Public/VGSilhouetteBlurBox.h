#pragma once
#include "CoreMinimal.h"

#include "VGRetainerBox.h"
#include "VGSilhouetteBlurBox.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGSilhouetteBlurBox : public UVGRetainerBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlurSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlurPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Sharpness;
    
    UVGSilhouetteBlurBox();

    UFUNCTION(BlueprintCallable)
    void SetSharpness(float InSharpness);
    
    UFUNCTION(BlueprintCallable)
    void SetColor(FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetBlurSize(float InBlurSize);
    
    UFUNCTION(BlueprintCallable)
    void SetBlurPrecision(int32 InBlurPrecision);
    
};

