#pragma once
#include "CoreMinimal.h"
#include "VGAIOrganizedTeam.h"
#include "VGAIPlayerTeamReplicatedData.h"
#include "VGConversationData.h"
#include "VGAIPlayerTeam.generated.h"

class AVGBattleCharacter;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAIPlayerTeam : public AVGAIOrganizedTeam {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGBattleCharacter* m_leader_actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AVGBattleCharacter*> m_respawn_actors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVGAIPlayerTeamReplicatedData m_replicated_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVGAIPlayerTeamReplicatedData m_replicated_data_cache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGConversationData> m_conversation_list;
    
public:
    AVGAIPlayerTeam(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void WarpToLeader(bool only_unreachable);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Activate(bool tickActivate);
    
};

