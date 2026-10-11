#pragma once
#include "CoreMinimal.h"
#include "VGBattleBRPacket.h"
#include "VGBattleInfo.h"
#include "VGBattleInfoBR.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGBattleInfoBR : public AVGBattleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ResultPacket, meta=(AllowPrivateAccess=true))
    FVGBattleBRPacket m_result_packet;
    
    AVGBattleInfoBR(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ResultPacket();
    
};

