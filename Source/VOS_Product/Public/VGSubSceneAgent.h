#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "VGPreviewActorEntry.h"
#include "VGSubSceneAgent.generated.h"

class ASceneCapture2D;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGSubSceneAgent : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ASceneCapture2D>> m_capture_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGPreviewActorEntry> m_actor_entries;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASceneCapture2D*> m_scene_captures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, AActor*> m_subscene_actors;
    
public:
    AVGSubSceneAgent(const FObjectInitializer& ObjectInitializer);

};

