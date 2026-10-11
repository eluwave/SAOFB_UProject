#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGHudCongrats.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudCongrats : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTime;
    
    UVGHudCongrats();

protected:
    UFUNCTION(BlueprintCallable)
    void SetLifeTimer(float sec);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

