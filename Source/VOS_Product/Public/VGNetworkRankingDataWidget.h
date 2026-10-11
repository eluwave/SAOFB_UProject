#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGNetworkRankingDataWidget.generated.h"

class UVGNetworkRankingTabSet;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGNetworkRankingDataWidget : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ranking_tab_set_name;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNetworkRankingTabSet* m_ranking_tab_set;
    
public:
    UVGNetworkRankingDataWidget();

};

