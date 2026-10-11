#pragma once
#include "CoreMinimal.h"

#include "GameFramework/Pawn.h"
#include "EVGCharaGender.h"
#include "VGGameEventCharacterAnimParam.h"
#include "VGGameEventEntry.h"
#include "VGGameEventInteractionInterface.h"
#include "VGGameEventCharacter.generated.h"

class UCapsuleComponent;
class UVGSkeletalMeshComponent;
class UVGSoundComponent;
class UVGVfxComponent;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGameEventCharacter : public APawn, public IVGGameEventInteractionInterface {
    GENERATED_BODY()
public:
    virtual void OnContact_Implementation(const FVGGameEventContactParam& param) override;

public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaGender m_gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_used_in_demo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_custom_stencil_enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* m_root_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGSkeletalMeshComponent* m_mesh_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGSoundComponent* m_sound_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGVfxComponent* m_vfx_component;
    
public:
    AVGGameEventCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopAnimation(float BlendOut);
    
    UFUNCTION(BlueprintCallable)
    void SetTranslucent(int32 ID, float coef);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtPosition(FVector pos, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtEnabled(bool value);
    
    UFUNCTION(BlueprintCallable)
    void SetCullingEnabled(bool value);
    
    UFUNCTION(BlueprintCallable)
    void ResetTranslucent(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimation(const FVGGameEventCharacterAnimParam& param);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameEventStart(const FVGGameEventEntry& Entry, bool IsExclusive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameEventEnd(const FVGGameEventEntry& Entry, bool IsExclusive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActorVisibilityChangeRequest(const FVGGameEventEntry& Entry, bool IsVisible);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimationPlaying() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGSoundComponent* GetSoundComponent() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGCharaGender GetGender() const;
    

    // Fix for true pure virtual functions not being implemented
};

