#pragma once
#include "CoreMinimal.h"
#include "VGGameMode.h"
#include "VGRoamGameMode.generated.h"

class AActor;
class UBehaviorTree;
class UVGAvatarCustomizeComponent;
class UVGRoamNpcDataAsset;
class UVGRoamNpcManager;

UCLASS(Blueprintable, NonTransient)
class AVGRoamGameMode : public AVGGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGRoamNpcManager* m_npc_manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGRoamNpcDataAsset* m_npc_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_pawn_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* m_behavior_tree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_afasys_step_sequence_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeComponent* m_avatar_customize_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_event_actor;
    
public:
    AVGRoamGameMode(const FObjectInitializer& ObjectInitializer);

};

