#pragma once
#include "CoreMinimal.h"

#include "VGSkillBulletArea.h"
#include "VGSkillBulletBlackHoleArea.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGSkillBulletBlackHoleArea : public AVGSkillBulletArea {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_range_effective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_range_attenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_suction_speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_damage_interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_offset;
    
public:
    AVGSkillBulletBlackHoleArea(const FObjectInitializer& ObjectInitializer);

};

