#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGRankingData.h"
#include "VGTextSymbol.h"
#include "VGUIActor.h"
#include "VGNetworkRankingListAgent.generated.h"

class UDataTable;
class UVGDialog;
class UVGHeroIconLoader;
class UVGNetworkRankingDataWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGNetworkRankingListAgent : public AVGUIActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UVGNetworkRankingDataWidget>> m_ranking_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_prize_ranking_dialog_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_scrollnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_data_load_wait_default;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNetworkRankingDataWidget* m_ranking_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGRankingData> m_ranking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_ranking_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_ranking_progress_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_connecting_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_error_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGHeroIconLoader* m_hero_icon_loader;
    
public:
    AVGNetworkRankingListAgent(const FObjectInitializer& ObjectInitializer);

};

