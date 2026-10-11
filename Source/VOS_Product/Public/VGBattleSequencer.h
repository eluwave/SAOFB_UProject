#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VGBattleBRRewardPacket.h"
#include "VGBattleTDMRewardPacket.h"
#include "VGBattleVersusRewardPacket.h"
#include "VGBattleSequencer.generated.h"

class AVGBattleInfo;
class UVGBattleRuleComponentBase;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGBattleSequencer : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGBattleRuleComponentBase* m_rule_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVGBattleInfo*> m_info_array;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_play_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_end_time;
    
public:
    AVGBattleSequencer(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SendWinner_Versus(FVGBattleVersusRewardPacket packet, bool is_rank_match);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SendWinner_TDM(FVGBattleTDMRewardPacket packet, bool is_rank_match);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SendWinner_BR(FVGBattleBRRewardPacket packet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_SendTeamDamageRed(float Damage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SendTeamDamageBlueAndRed(float damage1, float damage2);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_SendTeamDamageBlue(float Damage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_SendRespawnLogTDM(const FText& Name);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SendRespawnLimitTDM(int8 blue, int8 red);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SendRespawnLimit(int32 Count);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SendKillCountBR(const FString& Name, int8 score);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SendDeathPenaltyBR(const FString& Name, int8 score);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_LotRespawnPos(int32 unique_id, int8 ID);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ChangeState(uint8 State);
    
};

