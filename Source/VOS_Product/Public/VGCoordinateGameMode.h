#pragma once
#include "CoreMinimal.h"
#include "Misc/StringClassReference.h"
#include "VGGameMode.h"
#include "VGCoordinateGameMode.generated.h"

class AActor;
class ACameraActor;
class AVGCharacter;
class AVGCoordinateAgent;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGCoordinateGameMode : public AVGGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_coordinate_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_next_level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_prev_level;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGCoordinateAgent* m_coordinate_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGCharacter* m_avatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_weapon_actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACameraActor* m_camera;
    
public:
    AVGCoordinateGameMode(const FObjectInitializer& ObjectInitializer);

};

