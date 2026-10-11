#pragma once
#include "CoreMinimal.h"
#include "VGCoopLobbySettingDisplayItem.h"
#include "VGCoopLobbySettingDisplayItemPart.h"
#include "VGGridViewItem.h"
#include "VGVisualLobbySettingListItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGVisualLobbySettingListItem : public UVGGridViewItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGCoopLobbySettingDisplayItem m_display_item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_current_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGCoopLobbySettingDisplayItemPart> m_items;
    
public:
    UVGVisualLobbySettingListItem();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetItemText(int32 index);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentValue(int32 value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Refresh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InnerIndexChanged(int32 NewIndex, int32 OldIndex, bool DirectionLeft);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentValue() const;
    
};

