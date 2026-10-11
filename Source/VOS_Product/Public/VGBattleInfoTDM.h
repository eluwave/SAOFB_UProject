#pragma once
#include "CoreMinimal.h"
#include "VGBattleInfo.h"
#include "VGBattleTDMPacket.h"
#include "VGBattleInfoTDM.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGBattleInfoTDM : public AVGBattleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ResultPacket, meta=(AllowPrivateAccess=true))
    FVGBattleTDMPacket m_result_packet;
    
    AVGBattleInfoTDM(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ResultPacket();
    
};

