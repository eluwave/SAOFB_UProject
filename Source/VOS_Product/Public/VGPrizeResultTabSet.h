#pragma once
#include "CoreMinimal.h"
#include "VGTextSymbol.h"
#include "VGWidget.h"
#include "VGPrizeResultTabSet.generated.h"

class UVGPrizeResultItem;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGPrizeResultTabSet : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_total_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_total_prize_text;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVGPrizeResultItem*> m_items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGPrizeResultItem* m_total;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGPrizeResultItem* m_total_prize;
    
public:
    UVGPrizeResultTabSet();

    UFUNCTION(BlueprintCallable)
    void StartOut();
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
};

