#pragma once
#include "CoreMinimal.h"
#include "EVPOnlineRankType.h"
#include "EVGBattleType.h"
#include "VGNetworkResult.h"
#include "VGTDMResultParam.h"
#include "VGTDMResult.generated.h"

class UVGRankMatchDataSupervisor;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGTDMResult : public UVGNetworkResult {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool enable_grade;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGRankMatchDataSupervisor* m_rank_supervisor;
    
public:
    UVGTDMResult();

    UFUNCTION(BlueprintCallable)
    void SetResultParameters(const FVGTDMResultParam& param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetWinLose(int32 win_draw_lose);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetRank(EVPOnlineRankType prevRank, EVPOnlineRankType nowRank);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetMatchType(EVGBattleType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetDamageRate(float blue, float red, float Max);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetBattlePoint(int32 Start, int32 End);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnableGrade(bool grade);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeLeftRightTeam();
    
    UFUNCTION(BlueprintCallable)
    bool IsExitOk();
    
    UFUNCTION(BlueprintCallable)
    FText GetRankText(EVPOnlineRankType rank);
    
};

