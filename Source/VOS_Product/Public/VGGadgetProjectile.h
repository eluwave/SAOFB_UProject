#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "EVGDodgeAction.h"
#include "Templates/SubclassOf.h"
#include "VGGadgetStatePacket.h"
#include "VGGadgetThrowPacket.h"
#include "VGRequestToLeaveInterface.h"
#include "VGSoundCueInfo.h"
#include "VGGadgetProjectile.generated.h"

class AVGGadgetExplodeArea;
class UVGSkillHeader;
class UVGVfxComponent;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGadgetProjectile : public AStaticMeshActor, public IVGRequestToLeaveInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGSkillHeader* m_skill_header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_life_span;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_hit_life_span;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGGadgetExplodeArea> m_explode_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_sticky;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSoundCueInfo m_contact_se;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_radius;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGDodgeAction m_action;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_probability;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_duration;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OwnerId, meta=(AllowPrivateAccess=true))
    int32 m_owner_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LifeChanged, meta=(AllowPrivateAccess=true))
    bool m_is_life_changed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 m_spawn_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGVfxComponent* m_vfx_component;
    
public:
    AVGGadgetProjectile(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Throw(FVGGadgetThrowPacket packet);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Explode();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OwnerId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LifeChanged();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_Throw();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastSimulated_State(FVGGadgetStatePacket packet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_Explode();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Throw();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_State(FVGGadgetStatePacket packet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Explode();
    

    // Fix for true pure virtual functions not being implemented
};

