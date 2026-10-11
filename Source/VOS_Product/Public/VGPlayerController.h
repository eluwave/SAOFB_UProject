#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "EVGItemDropEffectType.h"
#include "VGAIUnitParam.h"
#include "VGForceFeedback.h"
#include "VGPlayerController.generated.h"

class AVGAITeam;
class UVGAIUnit;
class UVGAIUnitComponent;
class UVGCharacterTrackingFogComponent;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGPlayerController : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_camera_x_axis_reverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_camera_y_axis_reverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_speed_coef_x_max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_speed_coef_x_min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_speed_coef_y_max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_speed_coef_y_min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_speed_coef_ads_x_max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_speed_coef_ads_x_min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_speed_coef_ads_y_max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_speed_coef_ads_y_min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_speed_coef_scope_x_max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_speed_coef_scope_x_min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_speed_coef_scope_y_max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_speed_coef_scope_y_min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_camera_pitch_resettable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGForceFeedback> m_weapon_fire_ffb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGForceFeedback> m_attack_hit_ffb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGCharacterTrackingFogComponent* m_tracking_fog_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGAIUnitComponent* m_ai_unit_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAIUnitParam m_unit_parameter;
    
public:
    AVGPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUnit(UVGAIUnit* unit);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetItemDropEffectEnabled(EVGItemDropEffectType Type, const FString& User, bool value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVGAIUnitParam GetUnitParam() const;
    
    UFUNCTION(BlueprintCallable)
    UVGAIUnit* GetUnit();
    
    UFUNCTION(BlueprintCallable)
    AVGAITeam* GetTeam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyUnitParam() const;
    
};

