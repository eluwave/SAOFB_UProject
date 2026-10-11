#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGQuestDetailsPanel.generated.h"

class UCanvasPanel;
class UTexture2D;
class UVGGridView;
class UVGHeroIconLoader;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGQuestDetailsPanel : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* m_switcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_gv_task;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_gv_reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGHeroIconLoader* m_hero_icon_loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCanvasPanel*> m_page;
    
public:
    UVGQuestDetailsPanel();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHeroIcon(int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTime(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTargetDamage(float Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLife(int32 life);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBestTimeWithInt(int32 Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBestTime(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetQuestTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetQuestLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetQuestDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPageNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPageIndex() const;
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetHeroIcon(int32 index);
    
};

