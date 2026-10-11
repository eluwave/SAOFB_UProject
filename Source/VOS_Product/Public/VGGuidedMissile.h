#pragma once
#include "CoreMinimal.h"
#include "EVGGuidedMissileMode.h"
#include "EVGWeaponBulletType.h"
#include "VGNetSyncProjectileActor.h"
#include "VGGuidedMissile.generated.h"

class USceneComponent;
class UVGVfxSignalAsset;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGuidedMissile : public AVGNetSyncProjectileActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGVfxSignalAsset*> m_homing_vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_damage_threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVGWeaponBulletType, float> m_damage_map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_homing_rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fix_to_homing_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fix_to_fall_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGGuidedMissileMode m_init_mode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> m_homing_target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> m_fix_target;
    
public:
    AVGGuidedMissile(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SendDamage(float Damage);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeMode(EVGGuidedMissileMode mode);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_SendDamage(float Damage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_ChangeMode(EVGGuidedMissileMode mode);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SendDamage(float Damage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ChangeMode(EVGGuidedMissileMode mode);
    
};

