#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VGGameEventLocator.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGameEventLocator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* m_scene_root;
    
public:
    AVGGameEventLocator(const FObjectInitializer& ObjectInitializer);

};

