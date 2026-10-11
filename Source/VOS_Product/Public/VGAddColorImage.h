#pragma once
#include "CoreMinimal.h"

#include "Components/Image.h"
#include "VGAddColorImage.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTexture;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGAddColorImage : public UImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AddColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstanceDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PrevMaterial;
    
public:
    UVGAddColorImage();

    UFUNCTION(BlueprintCallable)
    void SetTexture(UTexture* InTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterial(UMaterialInterface* InMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetAddColor(FLinearColor InAddColor);
    
};

