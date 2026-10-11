#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VGAvatarCustomizeComponent.generated.h"

class UObject;
class UVGAvatarCustomizeSetting;
class UVGCharacterFigureSetting;
class UVGMeshMaterialOverrideManager;
class UVGSkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGAvatarCustomizeComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVGSkeletalMeshComponent*> m_meshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSetting* m_current_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSetting* m_loading_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSetting* m_arrangement_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSetting* m_preset_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGCharacterFigureSetting* m_figure_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_apply_on_begin;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_head_bounds_scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVGMeshMaterialOverrideManager*> m_material_overrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_loaded_objects;
    
public:
    UVGAvatarCustomizeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSetting(UVGAvatarCustomizeSetting* setting);
    
    UFUNCTION(BlueprintCallable)
    void RequestToApply();
    
};

