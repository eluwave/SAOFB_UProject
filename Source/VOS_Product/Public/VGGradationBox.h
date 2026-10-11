#pragma once
#include "CoreMinimal.h"

#include "Components/RetainerBox.h"
#include "VGGradationBox.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGGradationBox : public URetainerBox {
    GENERATED_BODY()
public:
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
    
    UVGGradationBox();

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

