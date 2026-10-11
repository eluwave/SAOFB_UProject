#pragma once
#include "CoreMinimal.h"
#include "VGBattleInfo.h"
#include "VGBattleVersusPacket.h"
#include "VGBattleInfoVersus.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGBattleInfoVersus : public AVGBattleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ResultPacket, meta=(AllowPrivateAccess=true))
    FVGBattleVersusPacket m_result_packet;
    
    AVGBattleInfoVersus(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ResultPacket();
    
};

