#pragma once
#include "CoreMinimal.h"
#include "EVGBulletAreaRotator.h"
#include "EVGSkillBulletTarget.h"
#include "Templates/SubclassOf.h"
#include "VGBulletData.h"
#include "VGHitBox.h"
#include "VGStatusBuff.h"
#include "VGSkillBullet.generated.h"

class AVGSkillBulletArea;
class USceneComponent;
class UVGVfxSignalAsset;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGSkillBullet : public AVGHitBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGSkillBulletTarget m_target_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGBulletData m_bullet_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_heal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_cure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_resurrect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGStatusBuff m_status_buff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_homing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_homing_rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBulletAreaRotator m_area_rotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGVfxSignalAsset*> m_begin_vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGVfxSignalAsset*> m_end_vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> m_homing_target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGSkillBulletArea> m_area_bullet;
    
public:
    AVGSkillBullet(const FObjectInitializer& ObjectInitializer);

};

