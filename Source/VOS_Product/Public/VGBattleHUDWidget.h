#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "VGDamagePacket.h"
#include "VGBattleHUDWidget.generated.h"

class UCanvasPanel;
class UVGHudAimDownSight;
class UVGHudCommonPanel;
class UVGHudCongrats;
class UVGHudDamage;
class UVGHudGoodAction;
class UVGHudPartyStatus;
class UVGHudPlayerStatus;
class UVGHudPrise;
class UVGHudPriseMess;
class UVGHudRuleGetMore;
class UVGHudUFGReticle;
class UVGMessageWindow;
class UVGWidget;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGBattleHUDWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> PopupDamageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BigPopupDamageRateThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmallPopupDamageRateThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PopupDamageNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TestInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_RootCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGHudAimDownSight* m_HudADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGHudUFGReticle* m_HudUFGReticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGMessageWindow* m_HudBattleMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGHudPlayerStatus* m_HudPlayerStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGHudPartyStatus* m_HudPartyStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGHudPrise* m_HudPrise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGHudPriseMess* m_HudPriseMess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGHudCongrats* m_HudCongrats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_HudPopupDamagePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGHudDamage* m_HudDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGHudRuleGetMore* m_HudRuleGetMore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGHudCommonPanel* m_HudCommonPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGHudGoodAction* m_HudGoodAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGWidget* m_WireGunReticleHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_PopupDamageClassRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGDamagePacket> m_ReqPopupDamage;
    
public:
    UVGBattleHUDWidget();

    UFUNCTION(BlueprintCallable)
    void SetGunSightVisibilityByEvent(bool is_visible);
    
    UFUNCTION(BlueprintCallable)
    void Set3DHudVisibilityByEvent(bool is_visible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGHudUFGReticle* GetUFGReticle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGMessageWindow* GetBattleMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGHudAimDownSight* GetADS() const;
    
};

