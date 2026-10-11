#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "VGMaskFadeImage.generated.h"

class UTexture;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMaskFadeImage : public UImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Mask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float threshold;
    
    UVGMaskFadeImage();

    UFUNCTION(BlueprintCallable)
    void SetThreshold(float InThreshold);
    
    UFUNCTION(BlueprintCallable)
    void SetTexture(UTexture* InTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetMask(UTexture* InMask);
    
};

