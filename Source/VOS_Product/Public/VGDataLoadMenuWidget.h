#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGAdditionalContent.h"
#include "VGPlayerCardPreviewCharacter.h"
#include "VGWidget.h"
#include "VGDataLoadMenuWidget.generated.h"

class UVGAvatarCustomizeSetting;
class UVGCharacterFigureSetting;
class UVGDialog;
class UVGGridView;
class UVGTabbedListView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGDataLoadMenuWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGPlayerCardPreviewCharacter> m_preview_characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSetting* m_customize_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGCharacterFigureSetting* m_figure_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGTabbedListView> m_dialog_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTabbedListView* m_dialog_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_dialog_items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_gv_main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_error_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_dialog_new;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_dialog_delete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_dialog_all_chunk_installed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_dialog_caution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAdditionalContent> m_dlc_mode;
    
public:
    UVGDataLoadMenuWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimerEnable(bool enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetTimer(int32 Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndMenu();
    
protected:
    UFUNCTION(BlueprintCallable)
    void onAvatarSetting(int32 index);
    
public:
    UFUNCTION(BlueprintCallable)
    void GoNextPhase();
    
};

