#pragma once
#include "CoreMinimal.h"
#include "EVGCharaUnique.h"
#include "Templates/SubclassOf.h"
#include "VGGameEventCharacter.h"
#include "VGGameEventHuman.generated.h"

class UAnimSequenceBase;
class UVGAvatarCustomizeComponent;
class UVGCharacterFigureSetting;
class UVGGameEventAnimInstance;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGameEventHuman : public AVGGameEventCharacter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaUnique m_character_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGGameEventAnimInstance> m_anim_blueprint_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeComponent* m_avatar_customize_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_figure_setting_disabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGCharacterFigureSetting* m_overwrite_figure_setting;
    
public:
    AVGGameEventHuman(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestToPlayDummyLipAnimation(bool value);
    
    UFUNCTION(BlueprintCallable)
    void RecreatePhysicsState();
    
    UFUNCTION(BlueprintCallable)
    void ForceClothNextUpdateTeleportAndReset();
    
};

