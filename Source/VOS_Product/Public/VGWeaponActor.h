#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BulletSpawnRequest.h"
#include "EVGDamageAttr.h"
#include "EVGWeaponCategory.h"
#include "EVGWeaponDivision.h"
#include "Templates/SubclassOf.h"
#include "VGBulletLineEffect.h"
#include "VGCharacterHitTolerance.h"
#include "VGHitEffectArray.h"
#include "VGMuzzleEffect.h"
#include "VGSoundCueInfo.h"
#include "VGWeaponActor.generated.h"

class AVGBattleCharacter;
class AVGBulletProjectile;
class AVGHitBox;
class AVGSkillBullet;
class AVGSkillBulletArea;
class AVGUltimateBullet;
class UChildActorComponent;
class UParticleSystemComponent;
class USoundAtomCueSheet;
class UVGPassiveSkillComponent;
class UVGSkeletalMeshComponent;
class UVGSoundComponent;
class UVGVfxComponent;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGWeaponActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGWeaponCategory m_category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGWeaponDivision m_division;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_classify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_variation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGSkeletalMeshComponent* m_weapon_mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_particle_system;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* m_se;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGHitBox> m_projectile_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMuzzleEffect> m_muzzle_effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGHitEffectArray> m_hit_effect_arrays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGBulletLineEffect> m_bulletline_effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSoundCueInfo m_muzzle_after_se;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSoundCueInfo m_muzzle_skill_se;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_muzzle_se_node;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSoundCueInfo m_aim_start_se;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSoundCueInfo m_aim_end_se;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_aim_se_node;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_shotgun_pellets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_barrel_rotation_speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSoundCueInfo m_barrel_rotation_se;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_shell_material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGPassiveSkillComponent* m_passive_skill_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGVfxComponent* m_vfx_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGSoundComponent* m_sound_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGBulletProjectile* m_bullet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGSkillBullet> m_extra_bullet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGSkillBulletArea> m_extra_bullet_area;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGBulletProjectile* m_ultra_assault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGUltimateBullet> m_ultra_sniper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGUltimateBullet> m_ultra_launcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UChildActorComponent* m_left_actor_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBulletSpawnRequest> m_bullet_request;
    
public:
    AVGWeaponActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVariation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGWeaponDivision GetDivision() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClassify() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGWeaponCategory GetCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBasePower() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindAttr(const TArray<EVGDamageAttr>& attr_array, EVGDamageAttr attr) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcTolerance(const FVGCharacterHitTolerance& tolerance, const TArray<EVGDamageAttr>& attr) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcMastery(float rate) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcDamageRange(AVGBattleCharacter* Target, const TArray<EVGDamageAttr>& attr, float damage_factor, float attack_power, float tolerance_result, float critical_factor, float weak_factor, float attenuation_rate, float mastery) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcDamageMelee(AVGBattleCharacter* Target, const TArray<EVGDamageAttr>& attr, float damage_factor, float attack_power, float tolerance_result, float critical_factor, float mastery) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcDamageCloseRange(AVGBattleCharacter* Target, const TArray<EVGDamageAttr>& attr, float damage_factor, float attack_power, float tolerance_result, float critical_factor, float mastery) const;
    
};

