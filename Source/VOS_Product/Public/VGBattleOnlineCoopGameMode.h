#pragma once
#include "CoreMinimal.h"
#include "VGBattleOnlineGameMode.h"
#include "VGBattleOnlineCoopGameMode.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGBattleOnlineCoopGameMode : public AVGBattleOnlineGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> m_npc_class_array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBehaviorTree*> m_npc_behavior_array;
    
public:
    AVGBattleOnlineCoopGameMode(const FObjectInitializer& ObjectInitializer);

};

