#pragma once
#include "CoreMinimal.h"
#include "EVGHudPriseState.h"
#include "VGWidget.h"
#include "VGHudPrise.generated.h"

class UCanvasPanel;
class UImage;
class UProgressBar;
class UTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudPrise : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGHudPriseState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> NumTexture;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_VisibilityControlPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_PriseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* m_PriseGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_Value1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_Value10;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_Value100;
    
public:
    UVGHudPrise();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NormalLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MaxLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Max();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HalfLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Half();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

