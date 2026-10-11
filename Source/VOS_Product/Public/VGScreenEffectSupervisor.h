#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGCharacterEdgeParam.h"
#include "VGOnScreenFadeEndDelegate.h"
#include "VGRadialBlurParam.h"
#include "VGScreenEffectSupervisor.generated.h"

class APostProcessVolume;
class UMaterial;
class UMaterialInstanceDynamic;
class UMaterialParameterCollection;
class UUserWidget;
class UVGFullscreenFade;
class UVGSaveError;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGScreenEffectSupervisor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGOnScreenFadeEnd OnScreenFadeEnd;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGFullscreenFade* m_screen_fade_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_screen_fade_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* m_temp_black_screen_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_temp_black_screen_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGSaveError* m_save_icon_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_save_icon_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* m_bg_fade_material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* m_bg_fade_material_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_chara_edge_mid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* m_radial_blur_material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* m_radial_blur_material_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGRadialBlurParam m_radial_blur_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APostProcessVolume* m_post_process_volume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVGCharacterEdgeParam> m_map_chara_edge_param_map;
    
public:
    UVGScreenEffectSupervisor();

    UFUNCTION(BlueprintCallable)
    void ShowTemporaryBlackScreen(int32 ZOrder);
    
    UFUNCTION(BlueprintCallable)
    void HideTemporaryBlackScreen();
    
};

