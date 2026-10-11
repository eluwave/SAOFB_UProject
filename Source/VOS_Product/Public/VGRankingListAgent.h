#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGRankingData.h"
#include "VGTextSymbol.h"
#include "VGUIActor.h"
#include "VGRankingListAgent.generated.h"

class UDataTable;
class UVGRankingWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGRankingListAgent : public AVGUIActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGRankingWidget> m_ranking_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_prize_ranking_dialog_text;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGRankingWidget* m_ranking_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGRankingData> m_ranking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_ranking_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_ranking_progress_table;
    
public:
    AVGRankingListAgent(const FObjectInitializer& ObjectInitializer);

};

