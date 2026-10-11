#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "EVGRegion.h"
#include "VGTextSymbol.h"
#include "VGWidget.h"
#include "VGNetworkRankingWidget.generated.h"

class UDataTable;
class UVGGridView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGNetworkRankingWidget : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_natinality_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_tab_page_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_region_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float cursor_ranking_delay_default;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* tab_page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_region_setting_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EVGRegion::Type>> m_region_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGTextSymbol> m_label_region_names;
    
public:
    UVGNetworkRankingWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void QueryClose();
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabChanged(bool value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetStringParameter(FName Key, const FString& value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetRegion(FVGTextSymbol Region);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

