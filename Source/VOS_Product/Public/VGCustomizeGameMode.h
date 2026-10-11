#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "Templates/SubclassOf.h"
#include "VGGameMode.h"
#include "VGCustomizeGameMode.generated.h"

class ACameraActor;
class AVGCharacter;
class AVGCustomizeAgent;
class UVGActionLibrary;
class UVGAvatarCustomizeSheet;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGCustomizeGameMode : public AVGGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGCustomizeAgent> m_customize_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSheet* m_customize_sheet;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_default_player_customize[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_default_afasys_customize[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGActionLibrary* m_action_library[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_next_level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_prev_level;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGCustomizeAgent* m_customize_agent;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGCharacter* m_avatar[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACameraActor* m_camera;
    
public:
    AVGCustomizeGameMode(const FObjectInitializer& ObjectInitializer);

};

