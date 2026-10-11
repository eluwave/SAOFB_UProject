#pragma once
#include "CoreMinimal.h"

#include "Components/Image.h"
#include "VGGradationImage.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTexture;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGGradationImage : public UImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GradationWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ColorWidthA;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstanceDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PrevMaterial;
    
public:
    UVGGradationImage();

    UFUNCTION(BlueprintCallable)
    void SetTexture(UTexture* InTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterial(UMaterialInterface* InMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetGradationWidth(float InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetColorWidthA(float InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetColorB(FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetColorA(FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetAngle(float InParam);
    
};

