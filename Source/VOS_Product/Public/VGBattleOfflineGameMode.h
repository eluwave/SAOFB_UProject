#pragma once
#include "CoreMinimal.h"
#include "VGGameMode.h"
#include "VGBattleOfflineGameMode.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class VOS_PRODUCT_API AVGBattleOfflineGameMode : public AVGGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_ms_respawn_interval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_mp_respawn_interval;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> m_npc_class_array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBehaviorTree*> m_npc_behavior_array;
    
public:
    AVGBattleOfflineGameMode(const FObjectInitializer& ObjectInitializer);

};

