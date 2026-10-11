#pragma once
#include "CoreMinimal.h"
#include "VGUIActor.h"
#include "VGCustomizeBaseAgent.generated.h"

class AActor;
class ACameraActor;
class AVGSoundPlaybackHandle;
class UVGSoundComponent;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGCustomizeBaseAgent : public AVGUIActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_camera_near;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_camera_far;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_figure_base_height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_figure_camera_influence;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACameraActor* m_camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_spline_actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGSoundComponent* m_sound_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGSoundPlaybackHandle* m_ZoomSEHandle;
    
public:
    AVGCustomizeBaseAgent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ZoomSEFinishedHandler();
    
public:
    UFUNCTION(BlueprintCallable)
    void BindCamera(ACameraActor* Camera);
    
    UFUNCTION(BlueprintCallable)
    void AddCameraSpline(AActor* Actor);
    
};

