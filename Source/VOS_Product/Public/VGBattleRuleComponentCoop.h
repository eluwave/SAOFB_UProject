#pragma once
#include "CoreMinimal.h"
#include "VGBattleRuleComponentBase.h"
#include "VGBattleRuleComponentCoop.generated.h"

class UVGBattleAggregatorCoop;
class UVGDialog;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGBattleRuleComponentCoop : public UVGBattleRuleComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGBattleAggregatorCoop* m_aggregator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_wait_dialog;
    
public:
    UVGBattleRuleComponentCoop(const FObjectInitializer& ObjectInitializer);

};

