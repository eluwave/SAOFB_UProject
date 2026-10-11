#pragma once
#include "CoreMinimal.h"
#include "EVGCoopLobbySettingItemModeType.h"
#include "VGCoopLobbySettingDisplayItem.h"
#include "VGTextSymbol.h"
#include "VGWidget.h"
#include "VGCoopLobbySettingsWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGCoopLobbySettingsWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_menu_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_section_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCoopLobbySettingItemModeType m_mode_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGCoopLobbySettingDisplayItem> m_display_items;
    
public:
    UVGCoopLobbySettingsWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void QueryClose();
    
    UFUNCTION(BlueprintCallable)
    void OpenEditSearchComment();
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

