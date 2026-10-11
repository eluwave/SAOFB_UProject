#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VGDamageDesc.h"
#include "VGDamageCauser.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGDamageCauser : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGDamageDesc m_desc;
    
public:
    AVGDamageCauser(const FObjectInitializer& ObjectInitializer);

};

