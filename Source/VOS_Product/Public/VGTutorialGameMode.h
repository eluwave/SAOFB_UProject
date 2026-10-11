#pragma once
#include "CoreMinimal.h"
#include "VGBattleOfflineGameMode.h"
#include "VGTutorialSpawnCharaParam.h"
#include "VGTutorialGameMode.generated.h"

class AVGTutorialManager;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGTutorialGameMode : public AVGBattleOfflineGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGTutorialSpawnCharaParam> k_spwaning_charas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGTutorialManager* m_tutorial_manager;
    
public:
    AVGTutorialGameMode(const FObjectInitializer& ObjectInitializer);

};

