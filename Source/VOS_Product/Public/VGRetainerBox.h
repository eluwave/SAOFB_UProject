#pragma once
#include "CoreMinimal.h"
#include "Components/ContentWidget.h"
#include "VGRetainerBox.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGRetainerBox : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 phase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PhaseCount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* EffectMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextureParameter;
    
public:
    UVGRetainerBox();

    UFUNCTION(BlueprintCallable)
    void SetTextureParameter(FName NewTextureParameter);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectMaterial(UMaterialInterface* NewEffectMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetEffectMaterial() const;
    
};

