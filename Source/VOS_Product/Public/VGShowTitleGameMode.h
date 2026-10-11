#pragma once
#include "CoreMinimal.h"
#include "EVGCameraControl.h"
#include "Templates/SubclassOf.h"
#include "VGGameMode.h"
#include "VGShowTitleGameMode.generated.h"

class UVGShowTitleWidget;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class VOS_PRODUCT_API AVGShowTitleGameMode : public AVGGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGShowTitleWidget> m_title_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_next_situation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_bgm_volume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_se_volume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_voice_volume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_cam_speed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_aim_speed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCameraControl m_lr_camera;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCameraControl m_ud_camera;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGShowTitleWidget* m_title_widget;
    
public:
    AVGShowTitleGameMode(const FObjectInitializer& ObjectInitializer);

};

