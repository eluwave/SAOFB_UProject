#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGRankingWidget.generated.h"

class UVGRankingTabSet;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGRankingWidget : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ranking_tab_set_name;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGRankingTabSet* m_ranking_tab_set;
    
public:
    UVGRankingWidget();

};

