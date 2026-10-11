#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "VGScrollImage.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTexture;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGScrollImage : public UImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollAngle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstanceDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PrevMaterial;
    
public:
    UVGScrollImage();

    UFUNCTION(BlueprintCallable)
    void SetTexture(UTexture* InTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollAngle(float InScrollAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollAmount(float InScrollAmount);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterial(UMaterialInterface* InMaterial);
    
};

