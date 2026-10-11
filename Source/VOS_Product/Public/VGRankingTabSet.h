#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGRankingTabSet.generated.h"

class UVGRankingItem;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGRankingTabSet : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_tab_item_name;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_item_in_time;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVGRankingItem*> m_items;
    
public:
    UVGRankingTabSet();

    UFUNCTION(BlueprintCallable)
    void StartOut();
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
};

