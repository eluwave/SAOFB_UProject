#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "VGMapMaskImage.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTexture;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMapMaskImage : public UImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Mask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* FadeMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstanceDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PrevMaterial;
    
public:
    UVGMapMaskImage();

    UFUNCTION(BlueprintCallable)
    void SetThreshold(float InThreshold);
    
    UFUNCTION(BlueprintCallable)
    void SetTexture(UTexture* InTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterial(UMaterialInterface* InMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetMask(UTexture* InMask);
    
    UFUNCTION(BlueprintCallable)
    void SetFadeMask(UTexture* InMask);
    
};

