#pragma once
#include "CoreMinimal.h"
#include "Misc/StringClassReference.h"
#include "VGGameState.h"
#include "VGBattleGameState.generated.h"

class ADonNavigationManager;
class AVGAITeamManager;
class AVGBRQuestAnnounceAgent;
class AVGBRResultAgent;
class AVGBattleSequencer;
class AVGCoopQuestAnnounceAgent;
class AVGCoopResultAgent;
class AVGDefenceQuestAnnounceAgent;
class AVGDropItemManager;
class AVGDungeon;
class AVGFFAQuestAnnounceAgent;
class AVGFFAResultAgent;
class AVGPrizeCollection;
class AVGScorestreak;
class AVGSkillAssetPool;
class AVGSummonEnergy;
class AVGTDMQuestAnnounceAgent;
class AVGTDMResultAgent;
class AVGVersusQuestAnnounceAgent;
class AVGVersusResultAgent;
class UVGAITeamManagerUtility;
class UVGBattleTalkManager;
class UVGDetectLossConnectionComponent;

UCLASS(Blueprintable, Config=Engine)
class VOS_PRODUCT_API AVGBattleGameState : public AVGGameState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_scorestreak_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGScorestreak* m_scorestreak;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_prize_collection_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGPrizeCollection* m_prize_collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGCoopQuestAnnounceAgent* m_coop_announce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGCoopResultAgent* m_coop_result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGVersusQuestAnnounceAgent* m_versus_announce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGVersusResultAgent* m_versus_result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGTDMQuestAnnounceAgent* m_tdm_announce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGTDMResultAgent* m_tdm_result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGFFAQuestAnnounceAgent* m_ffa_announce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGFFAResultAgent* m_ffa_result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGBRQuestAnnounceAgent* m_br_announce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGBRResultAgent* m_br_result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGDefenceQuestAnnounceAgent* m_defence_announce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGBattleSequencer* m_battle_sequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGAITeamManager* m_ai_team_manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAITeamManagerUtility* m_ai_team_manager_util;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGDropItemManager* m_drop_item_manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGBattleTalkManager* m_battle_talk_manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGSkillAssetPool* m_skill_asset_pool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADonNavigationManager*> m_don_managers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGDungeon* m_dungeon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGDetectLossConnectionComponent* m_detect_loss_component;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_satellite_ref;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_summonenergy_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGSummonEnergy* m_summonenergy;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_is_chara_ready;
    
public:
    AVGBattleGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    UVGAITeamManagerUtility* GetTeamManagerUtility();
    
    UFUNCTION(BlueprintCallable)
    AVGAITeamManager* GetTeamManager();
    
    UFUNCTION(BlueprintCallable)
    AVGDungeon* GetDungeon();
    
    UFUNCTION(BlueprintCallable)
    AVGDropItemManager* GetDropItemManager();
    
    UFUNCTION(BlueprintCallable)
    TArray<ADonNavigationManager*> GetDoNNavigationManagers();
    
    UFUNCTION(BlueprintCallable)
    UVGBattleTalkManager* GetBattleTalkManager();
    
};

