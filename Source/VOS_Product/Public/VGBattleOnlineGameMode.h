#pragma once
#include "CoreMinimal.h"
#include "VGGameMode.h"
#include "VGBattleOnlineGameMode.generated.h"

UCLASS(Blueprintable, NonTransient, Config=Engine)
class VOS_PRODUCT_API AVGBattleOnlineGameMode : public AVGGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_br_respawn_interval;
    
    AVGBattleOnlineGameMode(const FObjectInitializer& ObjectInitializer);

};

