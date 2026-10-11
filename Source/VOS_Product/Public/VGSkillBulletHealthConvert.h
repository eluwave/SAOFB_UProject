#pragma once
#include "CoreMinimal.h"
#include "VGSkillBullet.h"
#include "VGSkillBulletHealthConvert.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGSkillBulletHealthConvert : public AVGSkillBullet {
    GENERATED_BODY()
public:
    AVGSkillBulletHealthConvert(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float ConvertHealth(float rate) const;
    
};

