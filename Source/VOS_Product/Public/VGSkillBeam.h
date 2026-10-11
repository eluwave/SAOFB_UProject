#pragma once
#include "CoreMinimal.h"
#include "VGBeam.h"
#include "VGSkillBeam.generated.h"

class UVGSkillProjectileDescComponent;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGSkillBeam : public AVGBeam {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGSkillProjectileDescComponent* m_skill_desc;
    
public:
    AVGSkillBeam(const FObjectInitializer& ObjectInitializer);

};

