#pragma once
#include "CoreMinimal.h"
#include "VGProjectileActor.h"
#include "VGSkillProjectileActor.generated.h"

class UVGSkillProjectileDescComponent;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGSkillProjectileActor : public AVGProjectileActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGSkillProjectileDescComponent* m_skill_desc;
    
public:
    AVGSkillProjectileActor(const FObjectInitializer& ObjectInitializer);

};

