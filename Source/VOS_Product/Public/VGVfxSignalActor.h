#pragma once
#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "VGVfxSignalActor.generated.h"

class AVGGameEventHuman;
class USceneComponent;
class UVGVfxComponent;
class UVGVfxSignalAsset;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGVfxSignalActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_root_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGVfxComponent* m_vfx_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_play_actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_figure_setting_actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGVfxSignalAsset* m_signal_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_location_offset_coeff_tall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_location_offset_coeff_short;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_target_actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGGameEventHuman* m_figure_target_actor;
    
public:
    AVGVfxSignalActor(const FObjectInitializer& ObjectInitializer);

};

