#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "VGGameEventStepSequenceActorHolder.generated.h"

class AActor;
class ACameraActor;
class AVGGameEventStepSequenceSoundActor;
class UVGGameEventAnimInstance;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGGameEventStepSequenceActorHolder : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGGameEventAnimInstance> m_human_anim_bp_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_actors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGGameEventStepSequenceSoundActor* m_sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACameraActor* m_camera;
    
public:
    UVGGameEventStepSequenceActorHolder();

};

