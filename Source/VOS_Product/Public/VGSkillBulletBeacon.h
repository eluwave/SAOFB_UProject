#pragma once
#include "CoreMinimal.h"
#include "VGAIBeaconUnitParam.h"
#include "VGSkillBullet.h"
#include "VGSkillBulletBeacon.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGSkillBulletBeacon : public AVGSkillBullet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_life_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_activate_search;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAIBeaconUnitParam m_search_param;
    
public:
    AVGSkillBulletBeacon(const FObjectInitializer& ObjectInitializer);

};

