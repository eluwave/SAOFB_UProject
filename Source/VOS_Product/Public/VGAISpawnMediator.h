#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VGAISpawnMediator.generated.h"

class AVGCharacter;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAISpawnMediator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGCharacter* m_owner;
    
public:
    AVGAISpawnMediator(const FObjectInitializer& ObjectInitializer);

};

