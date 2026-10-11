#pragma once
#include "CoreMinimal.h"

#include "VGHudStatusBase.h"
#include "VGHudPlayerStatus.generated.h"

class UBorder;
class UCanvasPanel;
class UDataTable;
class UHorizontalBox;
class UImage;
class UProgressBar;
class UTextBlock;
class UTexture2D;
class UVGCommandAsset;
class UVGHudSkillSet;
class UVGWidget;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudPlayerStatus : public UVGHudStatusBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AmmoNormalColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AmmoWarningColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmmoWarningThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AmmoZeroColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SkillFocusColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor GadgetFocusColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> PlayerIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BulletAndSwordIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* NoneIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGCommandAsset* SkillSwitchCommand;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_character_role_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubWeaponIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageDispTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOpened;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_VisibilityControlPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_PlayerIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_PlayerIconSub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_RoleIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* m_SpBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_UltimateGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* m_MainAmmoBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_MainAmmoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_MainAmmoMaxText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* m_SubAmmoBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_SubAmmoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_SubAmmoMaxText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_MainGatling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_SubGatling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGHudSkillSet* m_SkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* m_SkillFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVGWidget*> m_efficacy_info;
    
public:
    UVGHudPlayerStatus();

    UFUNCTION(BlueprintCallable)
    void UseSkill(int32 slot_id);
    
    UFUNCTION(BlueprintCallable)
    void UpdateWeaponIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSubGatlingInfo(const FString& ammo_string, float gauge, bool is_over_heat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMainGatlingInfo(const FString& ammo_string, float gauge, bool is_over_heat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SkillSwitchOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SkillSwitchOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReloadSub();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReloadMain();
    
    UFUNCTION(BlueprintCallable)
    void Reload();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenHpFast();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenHp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsEnabledDispConditions();
    
public:
    UFUNCTION(BlueprintCallable)
    void Damaged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseHp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeWeapon(int32 index);
    
};

