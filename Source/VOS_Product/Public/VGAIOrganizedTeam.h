#pragma once
#include "CoreMinimal.h"
#include "EVGTeamCommand.h"
#include "VGAITeam.h"
#include "VGAITeamCommandParam.h"
#include "VGTeamCommandPacket.h"
#include "VGAIOrganizedTeam.generated.h"

class UVGAIUnit;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAIOrganizedTeam : public AVGAITeam {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGTeamCommand m_team_command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_unit_command_interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_hate_voice_interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FVGAITeamCommandParam> m_team_command_table;
    
public:
    AVGAIOrganizedTeam(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTeamCommand(const EVGTeamCommand Command, UVGAIUnit* leaderUnit, bool is_voice);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetTeamCommand(FVGTeamCommandPacket packet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MultiCast_SetTeamCommand(FVGTeamCommandPacket packet);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRescueEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecoveryEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHumanRessurectable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuffEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTeamCommand(EVGTeamCommand& Command, UVGAIUnit*& leaderUnit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRescuePriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRecoveryPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBuffPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttackPriority() const;
    
    UFUNCTION(BlueprintCallable)
    void ExecuteCommandSupport();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteCommandRecovery();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteCommandReady();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteCommandNoAttack();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteCommandMeeting();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteCommandFollow();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteCommandEvacuation();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteCommandDefence();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteCommandCrossfire();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteCommandConquest();
    
};

