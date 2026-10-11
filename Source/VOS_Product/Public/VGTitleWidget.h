#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGTitleMenuPage.h"
#include "VGWidget.h"
#include "VGTitleWidget.generated.h"

class UVGEULAWidget;
class UVGGridView;
class UVGPolicyWidget;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGTitleWidget : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGTitleMenuPage> m_menu_pages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGEULAWidget> m_eula_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGEULAWidget* m_eula_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGPolicyWidget> m_policy_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGPolicyWidget> m_policy_widget_steam_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGPolicyWidget* m_policy_widget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_gv_main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_mode_info;
    
public:
    UVGTitleWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowPushStart(bool IsShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitleName(const FText& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDarkness(bool IsDark);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowCopyLight(bool Show);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeavePage(bool isPush);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterPage(bool isPush);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDarkness();
    
protected:
    UFUNCTION(BlueprintCallable)
    FString GetSystemLanguage();
    
public:
    UFUNCTION(BlueprintCallable)
    FString GetGameVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

