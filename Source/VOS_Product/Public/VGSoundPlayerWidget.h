#pragma once
#include "CoreMinimal.h"
#include "VGSoundPlayerListTab.h"
#include "VGWidget.h"
#include "VGSoundPlayerWidget.generated.h"

class UVGTabbedListView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGSoundPlayerWidget : public UVGWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTabbedListView* m_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_list_window;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSoundPlayerListTab> m_list_tabs;
    
public:
    UVGSoundPlayerWidget();

    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void Close(bool bRemove);
    
};

