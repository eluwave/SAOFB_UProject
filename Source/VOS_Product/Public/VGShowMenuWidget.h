#pragma once
#include "CoreMinimal.h"
#include "VGShowMenuPage.h"
#include "VGWidget.h"
#include "VGShowMenuWidget.generated.h"

class UTexture2D;
class UVGMainMenuList;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGShowMenuWidget : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGShowMenuPage> m_menu_pages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_disable_players;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGMainMenuList* m_gv_main;
    
public:
    UVGShowMenuWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSubWeaponName(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSubSkillNames(const TArray<FString>& names);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSubSkillIcons(const TArray<UTexture2D*>& textures);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMainWeaponName(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMainSkillNames(const TArray<FString>& names);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMainSkillIcons(const TArray<UTexture2D*>& textures);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGadgetNames(const TArray<FString>& names);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGadgetIcons(const TArray<UTexture2D*>& textures);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeavePage(bool isPush);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterPage(bool isPush);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeIndex(int32 index);
    
};

