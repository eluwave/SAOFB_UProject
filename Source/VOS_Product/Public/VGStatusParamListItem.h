#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "VGGridViewItem.h"
#include "VGStatusParamListItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGStatusParamListItem : public UVGGridViewItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_status_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_status_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_up_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_up_value_visibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_correction;
    
public:
    UVGStatusParamListItem();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetValueUp(bool is_enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetValue(int32 value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetRightArrowEnable(bool is_enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetLeftArrowEnable(bool is_enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetArrowVisibility(bool is_visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaySubValueAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAddValueAnime();
    
};

