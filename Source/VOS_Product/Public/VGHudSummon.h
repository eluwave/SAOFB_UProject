#pragma once
#include "CoreMinimal.h"

#include "EVGHudSummonState.h"
#include "VGHudPrise.h"
#include "VGHudSummon.generated.h"

class UProgressBar;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudSummon : public UVGHudPrise {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGHudSummonState SummonState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rank1SummonableValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rank2SummonableValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rank3SummonableValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HpBarNormalColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HpBarNormalBackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NameNormalColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HpBarCautionColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HpBarCautionBackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NameCautionColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HpBarCautionThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HpBarWarningColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HpBarWarningBackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NameWarningColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HpBarWarningThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SummonGaugeRatio;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* m_HpBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_name;
    
public:
    UVGHudSummon();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Rank3Loop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Rank3();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Rank2Loop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Rank2();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Rank1Loop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Rank1();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImpossibleLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Impossible();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AlreadySummon();
    
};

