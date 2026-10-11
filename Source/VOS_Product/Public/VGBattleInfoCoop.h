#pragma once
#include "CoreMinimal.h"
#include "VGBattleCoopPacket.h"
#include "VGBattleInfo.h"
#include "VGBattleInfoCoop.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGBattleInfoCoop : public AVGBattleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ResultPacket, meta=(AllowPrivateAccess=true))
    FVGBattleCoopPacket m_result_packet;
    
    AVGBattleInfoCoop(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ResultPacket();
    
};

