#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "EVGBattleSyncStep.h"
#include "VGBattleInfo.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGBattleInfo : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_is_host;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EVGBattleSyncStep m_sync_step;
    
public:
    AVGBattleInfo(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SendSyncStep(EVGBattleSyncStep step_id);
    
};

