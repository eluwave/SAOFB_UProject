#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGNetworkRankingTabSet.generated.h"

class UVGNetworkRankingItem;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGNetworkRankingTabSet : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_tab_item_name;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_item_in_time;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVGNetworkRankingItem*> m_items;
    
public:
    UVGNetworkRankingTabSet();

    UFUNCTION(BlueprintCallable)
    void StartOut();
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
};

