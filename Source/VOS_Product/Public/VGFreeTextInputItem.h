#pragma once
#include "CoreMinimal.h"
#include "VGCoopLobbySettingDisplayItem.h"
#include "VGCoopLobbySettingDisplayItemPart.h"
#include "VGGridViewItem.h"
#include "VGFreeTextInputItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGFreeTextInputItem : public UVGGridViewItem {
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
    UVGFreeTextInputItem();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetItemText(int32 index);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentValue(int32 value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Refresh();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWindows() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InnerIndexChanged(int32 NewIndex, int32 OldIndex, bool DirectionLeft);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentValue() const;
    
};

