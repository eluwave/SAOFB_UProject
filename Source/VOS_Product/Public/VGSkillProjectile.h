#pragma once
#include "CoreMinimal.h"
#include "VGHitBox.h"
#include "VGSkillProjectile.generated.h"

class UVGSkillProjectileDescComponent;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGSkillProjectile : public AVGHitBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGSkillProjectileDescComponent* m_skill_desc;
    
public:
    AVGSkillProjectile(const FObjectInitializer& ObjectInitializer);

};

